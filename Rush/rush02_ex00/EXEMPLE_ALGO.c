//TRANSFORMER UN CHIFFRE EN TOUTE LETTRE 123 --> CENT-VING-TROIS
//IDÉE 1 : TRAITER CENTAINE DIZAINE UNITE --> LEN_NB = 10² 
//#*****************************************************************************************#
//
// len_nb =  3 donc tu sais Unite dizaine centaine donc 10² 10¹ 1 
// 490 = 400 / 100  =  4 // AFFICHE FOUR 
// COMME LEN = 3;  IL FAUT AFFICHER // HUNDRED AND FOUR POUR DIRE  4 100 
// APRES ON A 90 DONC ON AFFICHE JUSTE LA LIGNE 90 DONC NINETY
// 490 --> LIGNE 4 + LIGNE 100 + LIGNE 90 == FOUR HUNDRED NINETY
// 500 --> LIGNE 5 + LIGNE 100 CAR LEN = 3 ET COMME ON A DES ZERO APRES LA CENTAINE ON AFFICHE RIEN 
// 
// INPUT == 48 
// POUR TRAITER L'INPUT ET RESORTIR LE BON THERME DE LA BONNE LIGNE 

#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);
	int nb;
	int j;
	nb = ft_atoi(argv[1]);
    while (int i = 1; i < 2; i++)
	 {
        while (argv[1][j]) 
		{	
			j++;
		}
    }
    return 0;
}

