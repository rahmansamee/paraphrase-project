#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_WORDS 1000
#define MAX_WORDS_LEN 50
#define MAX_SYNONYMS 5

typedef struct {
    char original[50];
    char synonyms[MAX_SYNONYMS][50];
    int count;
} Synonym;

Synonym dictionary[] = {
    {"happy", {"joyful", "glad", "cheerful"}, 3},
    {"big", {"large", "huge", "enormous"}, 3},
    {"small", {"tiny", "little", "minuscule"}, 3},
    {"fast", {"quick", "rapid", "swift"}, 3},
    {"sad", {"unhappy", "sorrowful", "depressed"}, 3},
};

void textLoader(char words[][MAX_WORDS_LEN], int *wordCount);
void wordProcessor(char words[][MAX_WORDS_LEN], int wordCount);
void textSaver(char words[][MAX_WORDS_LEN], int wordCount);
char* getSynonym(const char *word);
void toLowerCase(const char *src, char *dest);
int isWord(const char *token);
void capitalizeIfNeeded(const char *original, char *replacement);

int main() {
    srand(time(0));

    char words[MAX_WORDS][MAX_WORDS_LEN];
    int wordCount = 0;

    textLoader(words, &wordCount);
    wordProcessor(words, wordCount);
    textSaver(words, wordCount);

    printf("Paraphrasing complete! Check output.txt\n");
    return 0;
}

void textLoader(char words[][MAX_WORDS_LEN], int *wordCount) {
    FILE *file = fopen("input.txt", "r");
    if (!file) {
        perror("Error opening input file");
        exit(1);
    }

    char ch;
    int idx = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) {
            words[*wordCount][idx++] = ch;
        } else {
            if (idx > 0) {
                words[*wordCount][idx] = '\0';
                (*wordCount)++;
                idx = 0;
            }
            if (!isspace(ch)) {
                words[*wordCount][0] = ch;
                words[*wordCount][1] = '\0';
                (*wordCount)++;
            }
        }
    }
    if (idx > 0) {
        words[*wordCount][idx] = '\0';
        (*wordCount)++;
    }

    fclose(file);
}

void wordProcessor(char words[][MAX_WORDS_LEN], int wordCount) {
    for (int i = 0; i < wordCount; i++) {
        if (!isWord(words[i])) continue;

        char *original = words[i];
        char lower[50];
        toLowerCase(original, lower);

        char *synonym = getSynonym(lower);
        if (synonym) {
            char replaced[50];
            strcpy(replaced, synonym);
            capitalizeIfNeeded(original, replaced);
            strcpy(words[i], replaced);
        }
    }
}

void textSaver(char words[][MAX_WORDS_LEN], int wordCount) {
    FILE *file = fopen("output.txt", "w");
    if (!file) {
        perror("Error creating output file");
        exit(1);
    }

    for (int i = 0; i < wordCount; i++) {
        fprintf(file, "%s", words[i]);
        if (i + 1 < wordCount && isWord(words[i + 1]))
            fprintf(file, " ");
    }

    fclose(file);
}

char* getSynonym(const char *word) {
    int dictSize = sizeof(dictionary) / sizeof(dictionary[0]);
    for (int i = 0; i < dictSize; i++) {
        if (strcmp(dictionary[i].original, word) == 0) {
            int index = rand() % dictionary[i].count;
            return dictionary[i].synonyms[index];
        }
    }
    return NULL;
}

void toLowerCase(const char *src, char *dest) {
    while (*src) {
        *dest++ = tolower(*src++);
    }
    *dest = '\0';
}

int isWord(const char *token) {
    for (int i = 0; token[i]; i++) {
        if (!isalpha(token[i])) return 0;
    }
    return 1;
}

void capitalizeIfNeeded(const char *original, char *replacement) {
    if (isupper(original[0])) {
        replacement[0] = toupper(replacement[0]);
    }
}
