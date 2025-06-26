#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "synonyms.h"
#include "dictionaire.c"
#include "phraseio.c"

#define MAX_SYNONYMS 5
#define MAX_WORDS 1000
#define MAX_WORD_PHRASE_LEN 100


// Declaration of functions
void textLoader (char words[][MAX_WORD_PHRASE_LEN], int *wordCount);
void wordProcess(char words[][MAX_WORD_PHRASE_LEN], int *wordCount);
void saveText(char words[][MAX_WORD_PHRASE_LEN], int wordCount);
int isWord(const char *token);
int isSentenceEndChar(char c);
char* getSynonym (const char *word);
void toLowerCase(const char *original,char *lower);
void needCapital(const char *original, char *replaced);

int main() {
    srand(time(0));
    char words[MAX_WORDS][MAX_WORD_PHRASE_LEN];
    int wordCount = 0;

    // words var is changing because it is an array, and array is a pointer.
    textLoader(words, &wordCount);
    wordProcess(words, &wordCount);
    saveText(words, wordCount);

    printf("Paraphrasing complete. :)\nCheck the output.txt");
    return 0;
}

void textLoader (char words[][MAX_WORD_PHRASE_LEN], int *wordCount)
{
    FILE *fptr = fopen("input.txt", "r");
    if(!fptr) {
        perror("Error opening the file");
        exit(1);
    }

    char ch; // char store
    int idx=0; // word forming letters
    while((ch=fgetc(fptr)) != EOF && *wordCount < MAX_WORDS) // loop of characters in input file
    {
        if (*wordCount >= MAX_WORDS) break;
        if(isalnum(ch) || ch == '\'') {
            // need to put "don't" not "don", "'", "t"
            words[*wordCount][idx++] = ch;
        }
        else {
            if (idx>0) {
                    words[*wordCount][idx] = '\0';
                    (*wordCount)++;
                    idx=0;
            }
            if (!isspace(ch)) {
                // treating punctuations
                words[*wordCount][0] = ch;
                words[*wordCount][1] = '\0';
                (*wordCount)++;
            }
        }
    }
    // to count the final word since we need the '\0' to count a char array as string.
    if(idx>0) {
        words[*wordCount][idx] = '\0';
        (*wordCount)++;
    }

    fclose(fptr);
}

void wordProcess(char words[][MAX_WORD_PHRASE_LEN], int *wordCountPtr)
{
    int wordCount = *wordCountPtr;
    // Phrase-level replacements
    for (int i = 0; i < wordCount;) {
        int replaced = 0;

        for (int p = 0; p < PHRASE_DICT_SIZE; p++) {
            if (i + phrases[p].word_len > wordCount) continue;

            int match = 1;
            char found[MAX_WORD_PHRASE_LEN * MAX_IDIOM_LEN] = "";
            for (int k = 0; k < phrases[p].word_len; k++) {
                if (!isWord(words[i + k])) {
                    match = 0;
                    break;
                }

                char lower[MAX_WORD_PHRASE_LEN];
                toLowerCase(words[i + k], lower);
                strcat(found, lower);
                if (k < phrases[p].word_len - 1) strcat(found, " ");
            }

            if (match && strcmp(found, phrases[p].original) == 0) {
                int randIndex = rand() % phrases[p].synonym_count;
                char *replacement = phrases[p].synonyms[randIndex];

                strncpy(words[i], replacement, MAX_WORD_PHRASE_LEN - 1);
                words[i][MAX_WORD_PHRASE_LEN - 1] = '\0';

                int shift = phrases[p].word_len - 1;
                for (int j = i + 1; j + shift < wordCount; j++) {
                    strcpy(words[j], words[j + shift]);
                }
                wordCount -= shift;
                *wordCountPtr = wordCount;
                replaced = 1;
                break;
            }
        }

        if (!replaced) i++;
    }

    // Single-word replacements
    for(int i=0; i< wordCount; i++) {
        if(!isWord(words[i])) continue;

        char *original = words[i];
        char lowerWord[MAX_WORD_PHRASE_LEN];
        toLowerCase(original, lowerWord);

        char *synonym = getSynonym(lowerWord);
        if(synonym) {
            char replaced[MAX_WORD_PHRASE_LEN];
            strcpy(replaced, synonym);
            needCapital(original, replaced);
            strcpy(words[i], replaced);
        }
    }
}

void saveText(char words[][MAX_WORD_PHRASE_LEN], int wordCount)
{
    FILE *fptr = fopen("output.txt", "w");
    if (!fptr) {
        perror("Error fetching output file.");
        exit(1);
    }

    for (int i = 0; i < wordCount; i++) {
        if (i > 0) {
            // Get last char of previous token
            char *prev = words[i - 1];
            int lastCharIndex = strlen(prev) - 1;
            char lastChar = prev[lastCharIndex];

            // If prev ends with sentence punctuation and current starts with alpha char
            if (isSentenceEndChar(lastChar) && isalpha(words[i][0])) {
                fprintf(fptr, " ");
            }
            // Else: word–word or word–punctuation
            else if (isWord(words[i - 1]) || isWord(words[i])) {
                fprintf(fptr, " ");
            }
        }

        fprintf(fptr, "%s", words[i]);
    }

    fclose(fptr);
}

int isWord(const char *token)
{
    // Dont change the address value!
    for(int i=0; token[i]; i++) {
        if(!isalnum(token[i])) return 0;
    }
    return 1;
}

int isSentenceEndChar(char c) {
    return c == '.' || c == '?' || c == '!';
}

void toLowerCase(const char *original,char *lower)
{
    // need to lower case in a new variable because original will be further used
    while(*original) {
        *lower++ = tolower(*original++);
    }
    *lower = '\0';
}

char* getSynonym (const char *word)
{
    // sour is already a string (const char*); *sour would wrongly dereference it.
    int dictSize = DICT_SIZE;
    for(int i=0; i<dictSize; i++) {
        if(strcmp(dictionary[i].original, word) == 0) {
            int index = rand() % dictionary[i].count;
            return dictionary[i].synonyms[index];
        }
    }
    return NULL;
}

void needCapital(const char *original, char *replaced)
{
    if(*original && *replaced) {
        if(isupper(original[0])) {
            replaced[0] = toupper(replaced[0]);
        }
    }
}

