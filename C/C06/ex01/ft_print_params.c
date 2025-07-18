#include <unistd.h>


/* FT_STR LEN POUR AVOIR LA LONGEUR DE CHAQUE CHAINE DE CHAR */

int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int	main(int argc, char **argv)
{
int i;

char newline;

i = 1; /* COMPTEUR A 1 CAR ARGV[0] C LE ./a.out */
newline = '\n';
	while (i < argc)
/* CHAQUE ARGUMENT EST COMPTÉ COMME UNE NOUVELLE CHAINE DE CHARACTERE DONC AFFICHE JUSTE CHAQUE CHAR, PASSE UNE LIGNE ET CHANGE D'ARGV[i] EN BOUCLE JUSQU'A FIN D'ARGC */
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write( 1, &newline, 1); /* NEWLINE EN MÉMOIRE = \n*/
		i++;
	}
return (0);
}
