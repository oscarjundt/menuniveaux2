#include <iostream>
#include <conio.h>
#include "myconio.h"
#include "tp3.h"


using namespace std;

int main() {
	bool t = true;
	while(t){
		char eve = 0x00;
		ini0();
		int nb2 = 5;
		while (eve != 13)
		{
			eve = _getch();
			switch (eve)
			{
			case 0x50: if (nb2 < 9) { nb2 = nb2 + 2; }
					 else { nb2 = 5; };
					 break;
			case 0x48: if (nb2 > 5) { nb2 = nb2 - 2; }
					 else { nb2 = 5; };
					 break;

			}
			gotoxy(11, nb2);

		}
		if (nb2 == 5) {
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
		else if(nb2==7)
		{
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
		else {
			t = false;
			clrscr();
		}
	}
}