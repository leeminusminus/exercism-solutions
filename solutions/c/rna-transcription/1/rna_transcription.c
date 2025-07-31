#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna) {
    char * rna = (char *) malloc(strlen(dna)+1);
    int i;
    for (i = 0; dna[i]; i++) {
        switch(dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default: rna[i] = 'X';
        }
    }
    rna[i] = '\0';
    return rna;
}
