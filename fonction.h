#ifndef FONCTIONS_H_ 
#define FONCTIONS_H_ 


#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct perso
{
    SDL_Rect postion_perso;
SDL_Surface *perso_droite;
SDL_Surface *perso_gauche;
SDL_Rect droite[9];
SDL_Rect gauche[9];
int farme;
}perso;
typedef struct perso2
{
    SDL_Rect postion_perso2;
SDL_Surface *perso_droite2;
SDL_Surface *perso_gauche2;
SDL_Rect droite2[9];
SDL_Rect gauche2[9];
int farme2;
}perso2;

void init_perso(perso* p);
void init_perso2(perso2* p2);
void afficher_perso(perso p,SDL_Surface* screen ,int move );
void afficher_perso2(perso2 p2,SDL_Surface* screen ,int sens );
void anime_perso(perso* p,int move);
void anime_perso2(perso2* p2,int sens);
void deplacer_perso(perso* p,int move);
void deplacer_perso2(perso2* p2,int sens);
#endif 
