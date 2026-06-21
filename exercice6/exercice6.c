//
// Created by Ivan Nkelefack on 2026-05-18.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercice6.h"

void initialiser(ListeNotes* liste, int inc) {
    liste->inc   = inc;
    liste->nbmax = inc;
    liste->nb    = 0;
    liste->notes = (Note*)malloc(inc * sizeof(Note));
}

void detruire(ListeNotes* liste) {
    free(liste->notes);
    liste->notes = NULL;
    liste->nb = liste->nbmax = 0;
}

void agrandir(ListeNotes* liste) {
    int newMax    = liste->nbmax + liste->inc;
    Note* nouveau = malloc(newMax * sizeof(Note));
    Note* src     = liste->notes;
    Note* dest    = nouveau;
    for (int i = 0; i < liste->nb; i++, src++, dest++)
        *dest = *src;
    free(liste->notes);
    liste->notes = nouveau;
    liste->nbmax = newMax;
}

void reduire(ListeNotes* liste) {
    if ((liste->nbmax - liste->nb) < liste->inc) {
        return;
    }

    if (liste->nbmax <= liste->inc) {
        return;
    }

    int newMax    = liste->nbmax - liste->inc;
    Note* nouveau = (Note*)malloc(newMax * sizeof(Note));
    Note* src     = liste->notes;
    Note* dest    = nouveau;
    for (int i = 0; i < liste->nb; i++, src++, dest++)
        *dest = *src;
    free(liste->notes);
    liste->notes = nouveau;
    liste->nbmax = newMax;
}

int existeDeja(ListeNotes* liste, char* nom, char* prenom) {
    Note* p = liste->notes;
    for (int i = 0; i < liste->nb; i++, p++) {
        if (strcmp(p->nom, nom) == 0) {
            if (strcmp(p->prenom, prenom) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

