#ifndef SYNONYMS_H
#define SYNONYMS_H

#include <stdbool.h>

#define MAX_WORD_PHRASE_LEN 100
#define MAX_SYNONYMS 5

typedef struct {
    char original[MAX_WORD_PHRASE_LEN];
    char synonyms[MAX_SYNONYMS][MAX_WORD_PHRASE_LEN];
    int count;
} Synonyms;

extern Synonyms dictionary[];
extern int DICT_SIZE;


#endif // SYNONYMS_H
