/*
##############################################################
fichier du main(mtp3.cpp) du menu
creer par oscar jundt-schmitter
etudiant en BTS SNIR
##############################################################
*/
#include <iostream>
#include <conio.h>
#include "myconio.h"
#include "tp3.h"


using namespace std;

int main() {
	bool t = true;
	//tant qu'on a pas selection la fin. il boucle
	while(t){
		char eve = 0x00;
		//affichage initial du graphisme
		ini0();
		int nb2 = 5;
		//tant qu'on n'appuie pas sur la touche entrer
		while (eve != 13)
		{
			//lie la touch appuier
			eve = _getch();
			switch (eve)
			{
			case 0x50: if (nb2 < 11) { nb2 = nb2 + 2; }
					 else { nb2 = 5; };
					 break;
			case 0x48: if (nb2 > 5) { nb2 = nb2 - 2; }
					 else { nb2 = 5; };
					 break;

			}
			gotoxy(11, nb2);

		}
		//si la position du curseur est egale a 5 on vas dans la partie tp1
		if (nb2 == 5) {
			//on lence l'initialisation de l'affichage du graphisme du tp 1
			ini();
			eve = 0x00;
			int nb = 5;
			while (eve != 13) {
				eve = _getch();
				switch (eve)
				{
				case 0x50: if (nb < 9) { nb = nb + 2; }
						 else { nb = 5; };
						 break;
				case 0x48: if (nb > 5) { nb = nb - 2; }
						 else { nb = 5; };
						 break;

				}
				gotoxy(11, nb);
			}
			clrscr();
			switch (nb)
			{
			case 5: calcule();
				break;
			case 7: nbmonnais();
				break;
			case 9:ini0();
				break;
			}
		}
		//si la position du curseur est egal a 7 on lance la partie tp2
		else if(nb2==7)
		{
			//on lance l'initalisation du graphisme pour le tp 2
			ini2();
			eve = 0x00;
			int nb = 5;
			while (eve != 13) {
				eve = _getch();
				switch (eve)
				{
				case 0x50: if (nb < 11) { nb = nb + 2; }
						 else { nb = 5; };
						 break;
				case 0x48: if (nb > 5) { nb = nb - 2; }
						 else { nb = 5; };
						 break;

				}
				gotoxy(11, nb);
			}
			clrscr();
			switch (nb)
			{
			case 5: cub();
				break;
			case 7: cercle();
				break;
			case 9:polinom();
				break;
			case 11:ini0();
				break;
			}
		}
		//si la position du curseur est egale a 9 on lance le tp3
		else if (nb2 == 9) {
			//on lence l'affichage du graphisme du tp 3
			ini3();
			eve = 0x00;
			int nb = 5;
			while (eve != 13) {
				eve = _getch();
				switch (eve)
				{
				case 0x50: if (nb < 11) { nb = nb + 2; }
						 else { nb = 5; };
						 break;
				case 0x48: if (nb > 5) { nb = nb - 2; }
						 else { nb = 5; };
						 break;

				}
				gotoxy(11, nb);
			}
			clrscr();
			switch (nb)
			{
			case 5: Surface();
				break;
			case 7: nbmonnais2();
				break;
			case 9:calcule2();
				break;
			}
		}
		//sinon on arrete le processus
		else {
			t = false;
			clrscr();
		}
	}
}