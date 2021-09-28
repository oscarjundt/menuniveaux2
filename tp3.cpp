/*
##############################################################
fichier des fonction(tp3.cpp) du menu
creer par oscar jundt-schmitter
etudiant en BTS SNIR
##############################################################
*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "tp3.h"
#include "myconio.h"

using namespace std;

/// @brief calculer l'aire d'un cercle
/// @param x est les rayon donner par l'user
/// @return l'aire
float aire(float x) {
	float res = M_PI * (x * x);
	return res;
}
/// @brief calcule le volume d'un cercle
/// @param x2 est le rayon
/// @return le volume
float volume(float x2) {
	float res2 = (4 / 3) * M_PI * (x2 * x2 * x2);
	return res2;
}
void affichage(float x3, float y3) {
	cout << x3 << endl;
	cout << y3 << endl;
}
/// @brief fonction de calcule du rayon et du volume d'un cercle
void cercle() {
	float r;
	bool t = true;
	while (t) {
		cin >> r;
		if (r >= 0) {
			float resultat = aire(r);
			float resultat2 = volume(r);
			affichage(resultat, resultat2);
			t = false;
		}
		else {
			cout << "erreur la variable r ne peux pas etre negatif" << endl;
			t = true;
		}
	}
}
/// @brief calcule le cube, le carre d'un liste de nombre
void cub() {
	int table[50];
	int rescar;
	int rescub = 1;
	int inc = 0;
	for (int i = 0; i < 50; i++) {
		table[i] = i;
	}
	for (int i2 = 0; i2 < 50; i2++) {
		if (inc <= 10) {
			rescar = table[i2] * table[i2];
			for (int i3 = 1; i3 <= 3; i3++) {
				rescub = rescub * table[i2];
			}
			printf("%d     %d      %d\n", table[i2], rescar, rescub);
			rescub = 1;
			inc = inc + 1;
		}
		else {
			system("Pause");
			inc = 0;
		}
	}
}
void ini0() {
	clrscr();
	char vert = 179;
	char hor = 196;
	char hd = 191;
	char hg = 218;
	char bd = 217;
	char bg = 192;
	string to = "";
	string to2 = "";
	string grr[5] = { "Menu","tp1","tp2","tp3","fin"};
	string to22 = "";
	to22 = vert;
	textcolor(GREEN);
	for (int i = 0; i < 110; i++) {
		to = to + hor;
		to2 = to2 + hor;
		to22 = to22 + " ";
	}
	to22 = to22 + vert;
	cout << to;
	for (int i2 = 0; i2 < 15; i2++) {
		cout << to22 << endl;
		switch (i2)
		{
		case 1: cout << "|                                                " << grr[0] << endl;
			break;
		case 2: cout << "|          " << grr[1] << endl;
			break;
		case 3: cout << "|          " << grr[2] << endl;
			break;
		case 4: cout << "|          " << grr[3] << endl;
			break;
		case 5:cout << "|          " << grr[4] << endl;
			break;
		}
		

	}
	cout << to2;
	gotoxy(11, 5);
}
/// @brief fonction d'initialisation du graphisme
void ini() {
	clrscr();
	char vert = 179;
	char hor = 196;
	char hd = 191;
	char hg = 218;
	char bd = 217;
	char bg = 192;
	string to = "";
	string to2 = "";
	string grr[6] = { "Tp1","calcule","monnais","retour"};
	string to22 = "";
	to22 = vert;
	textcolor(GREEN);
	for (int i = 0; i < 110; i++) {
		to = to + hor;
		to2 = to2 + hor;
		to22 = to22 + " ";
	}
	to22 = to22 + vert;
	cout << to;
	for (int i2 = 0; i2 < 15; i2++) {
		cout << to22 << endl;
		switch (i2)
		{
		case 1: cout << "|                                                " << grr[0] << endl;
			break;
		case 2: cout << "|          " << grr[1] << endl;
			break;
		case 3: cout << "|          " << grr[2] << endl;
			break;
		case 4:  cout << "|          " << grr[3] << endl;
		}

	}
	cout << to2;
	gotoxy(11, 5);
}

void ini2() {
	clrscr();
	char vert = 179;
	char hor = 196;
	char hd = 191;
	char hg = 218;
	char bd = 217;
	char bg = 192;
	string to = "";
	string to2 = "";
	string grr[6] = { "Tp2","cube","cercle","polinom","retour"};
	string to22 = "";
	to22 = vert;
	textcolor(GREEN);
	for (int i = 0; i < 110; i++) {
		to = to + hor;
		to2 = to2 + hor;
		to22 = to22 + " ";
	}
	to22 = to22 + vert;
	cout << to;
	for (int i2 = 0; i2 < 15; i2++) {
		cout << to22 << endl;
		switch (i2)
		{
		case 1: cout << "|                                                " << grr[0] << endl;
			break;
		case 2: cout << "|          " << grr[1] << endl;
			break;
		case 3: cout << "|          " << grr[2] << endl;
			break;
		case 4: cout << "|          " << grr[3] << endl;
			break;
		case 5:cout << "|          " << grr[4] << endl;
		}

	}
	cout << to2;
	gotoxy(11, 5);
}



void ini3() {
	clrscr();
	char vert = 179;
	char hor = 196;
	char hd = 191;
	char hg = 218;
	char bd = 217;
	char bg = 192;
	string to = "";
	string to2 = "";
	string grr[5] = { "Tp3","surface","calcule","calculev2", "retour" };
	string to22 = "";
	to22 = vert;
	textcolor(GREEN);
	for (int i = 0; i < 110; i++) {
		to = to + hor;
		to2 = to2 + hor;
		to22 = to22 + " ";
	}
	to22 = to22 + vert;
	cout << to;
	for (int i2 = 0; i2 < 15; i2++) {
		cout << to22 << endl;
		switch (i2)
		{
		case 1: cout << "|                                                " << grr[0] << endl;
			break;
		case 2: cout << "|          " << grr[1] << endl;
			break;
		case 3: cout << "|          " << grr[2] << endl;
			break;
		case 4: cout << "|          " << grr[3] << endl;
			break;
		case 5: cout << "|          " << grr[4] << endl;

		}
	}
		cout << to2;
		gotoxy(11, 5);
}



/// @brief caclule la somme de 2 nombre
/// @param x nombre donner par l'utilisateur
/// @param y nombre donner par l'utilisateur
/// @return la somme
int somme(int x, int y) {
	int res = x + y;
	return res;
}
/// @brief calcule la différence de 2 nombre
/// @param x2 nombre donner par l'user
/// @param y2 nombre donner par l'user
/// @return 
int soustraction(int x2, int y2) {
	int res2 = x2 - y2;
	return res2;
}
int multi(int x3, int y3) {
	int res3 = x3 * y3;
	return res3;
}
float div(float x4, float y4) {
	float res4 = x4 / y4;
	return res4;
}
/// @brief procedure d'affichage. affiche le resultat des fonction somme(), soustraction et multi et div
/// @param ress 
/// @param ressou 
/// @param ressmu 
/// @param resdiv 
void affichage(int ress, int ressou, int ressmu, float resdiv) {
	cout << "l'addition est :" << ress << endl;
	cout << "la soustraction est :" << ressou << endl;
	cout << "la multiplication fait: " << ressmu << endl;
	cout << "la division est: " << resdiv << endl;
}
/// @brief fonction qui calcule la différence, la somme, le produit, la divison de 2 nombre donner
void calcule() {
	int nb1;
	int nb2;
	int resultat;
	int resultat2;
	int resultat3;
	float resultat4;
	cout << "choisir nombre: ";
	cin >> nb1;
	cout << "choisir nombre: ";
	cin >> nb2;
	resultat = somme(nb1, nb2);
	resultat2 = soustraction(nb1, nb2);
	resultat3 = multi(nb1, nb2);
	resultat4 = div(float(nb1), float(nb2));
	affichage(resultat, resultat2, resultat3, resultat4);
}
void nbmonnais() {
	float tab2[8] = { 1,2,5,10,20,50,100,200 };
	int tab[8];
	float res = 0;
	for (int i = 0; i < 8; i++) {
		cout << tab2[i] << "c: ";
		cin >> tab[i];
	}
	for (int i2 = 0; i2 < 8; i2++) {
		res = res + tab[i2] * tab2[i2];
	}
	cout << res / 100 << endl;
	system("pause");
}

/// @brief fonction du polinom du second degrer
void polinom() {
	int a;
	int b;
	int c;
	int delta;
	int solution1;
	int solution2;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "il y'a une infinite de solution" << endl;
	}
	else if (a == 0 && b == 0 && c != 0) {
		cout << "aucun solution" << endl;
	}
	else {
		delta = (b * b) - (4 * a * c);
		if (delta == 0) {
			cout << "une solution: " << (-b) / (2 * a) << endl;

		}
		else if (delta > 0) {
			solution1 = (-b + sqrt(delta)) / (2 * a);
			solution2 = (-b - sqrt(delta)) / (2 * a);
			cout << solution1 << " et " << solution2 << endl;
		}
		else if (delta < 0) {
			solution1 = (-b) / (2 * a) + sqrt((abs(-delta)) / (2 * a));
			solution2 = (-b) / (2 * a) - sqrt((abs(-delta)) / (2 * a));
			cout << solution1 << " et " << solution2 << endl;
		}
	}
}
/// @brief fonction qui calcule la surface et le volume
/// @param Rayons variable donner par l'utilisateur
/// @param Surf resultat du calcule de la surface
/// @param Vol resultat du calcule du volume
/// @return null
float CalculeSurface(float Rayons, float *Surf, float *Vol) {
	*Surf = M_PI * (Rayons * Rayons);
	*Vol = (4 / 3) * M_PI * pow(Rayons,3);
	return 0;
}

/// @brief fonction principale du calcule de la surface
void Surface() {
	int Rayons;
	cout << "donner rayons: ";
	cin >> Rayons;
	float Surf;
	float* pointeurS=&Surf;
	float Vol;
	float* pointeurV = &Vol;
	CalculeSurface(Rayons,pointeurS,pointeurV);
	cout <<"surface=" << Surf << ";" <<"volume=" << Vol << endl;
	system("pause");
}

/// @brief fonction qui calcule la monnais
/// @param tab 
/// @param tab2 
/// @return le total d'argent
float calculemonnais(float* tab, int* tab2) {
	float res = 0;
	for (int i = 0; i < 8; i++) {
		res = res + (tab[i] * tab2[i]);
	}
	return res/100;
}
/// @brief fonction princiaple de calcule de monnais version 2
void nbmonnais2() {
	float tab[8] = { 1,2,5,10,20,50,100,200 };
	int tab2[8];
	int a;
	for (int i = 0; i < 8; i++) {
		cin >> a;
		tab2[i] = a;
	}
	float res2 = calculemonnais(tab, tab2);
	cout << res2<<endl;
	system("pause");
}

/// @brief fait la somme,le produit, la difference de 2 variable
/// @param nA entier donner par l'utilisateur
/// @param nB entier donner par l'utilisateur
/// @param val1 resultat de la somme
/// @param val2 resultat de la difference
/// @param val3 resultat du produit
void CalculeArit(int nA, int nB, int *val1, int *val2, int *val3) {
	*val1 = nA + nB;
	*val2 = nA - nB;
	*val3 = nA * nB;
}

void calcule2() {
	int nA;
	int nB;
	cin >> nA;
	cin >> nB;
	int valadd;
	int valsous;
	int valmult;
	CalculeArit(nA, nB, &valadd, &valsous, &valmult);
	cout  << valadd << ";" << valsous << ";" << valmult<<endl;
	system("pause");
}
