#ifndef SYNONYMS_H
#define SYNONYMS_H

#include <stdbool.h>

#define MAX_WORD_PHRASE_LEN 100
#define MAX_SYNONYMS 5
#define MAX_IDIOM_LEN 10

typedef struct {
    char original[MAX_WORD_PHRASE_LEN];
    char synonyms[MAX_SYNONYMS][MAX_WORD_PHRASE_LEN];
    int count;
} Synonyms;

typedef struct {
    const char *original;
    const char *synonyms[MAX_SYNONYMS];
    int synonym_count;
    int word_len;
} Phrase;


#endif // SYNONYMS_H
