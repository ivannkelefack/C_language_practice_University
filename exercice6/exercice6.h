//
// Created by Ivan Nkelefack on 2026-05-18.
//

#ifndef EXERCICE6_EXERCICE6_H
#define EXERCICE6_EXERCICE6_H

typedef struct {
    char  nom[10];
    char  prenom[10];
    float valeur;
} Note;

typedef struct {
    Note* notes;
    int   nbmax;   /* taille du tableau */
    int   nb;      /* nombre d'éléments dans la liste */
    int   inc;     /* taille de l'incrémentation */
} ListeNotes;

#endif //EXERCICE6_EXERCICE6_H
