#ifndef __FUNCTION_H__
#define __FUNCTION_H__

float aleatoire();                                           // fonction pour generer un flotant aleatoire entre 0 et 1;
int min(int a);                                              // fonction pour generer un nombre minimal en fonction du niveau a du jeu;
int max(int a);                                              // fonction pour generer un nombre minimal en fonction du niveau a du jeu;
int guess(int min, int max);                                 // fonction pour generer le nombre aleatoire en fonction de min et de max;
int gap1(int I, int E);                                      // Fonction pour retourner un petit nombre pour l'intervalle de contrainte;
int gap2(int I, int E);                                      // Fonction pour retourner un petit nombre pour l'intervalle de contrainte;
int score(int N, int E);                                     // Fonction pour retourner un score en fonction du niveau N et du nombre d'essaies E;

#endif
