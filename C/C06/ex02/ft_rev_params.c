#include <unistd.h>


/*<-- FT_STR LEN POUR AVOIR LA LONGEUR DE CHAQUE CHAINE DE CHAR -->*/

int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

#include <stdio.h>

int	main(int argc, char **argv)
{

int i;

char newline;

i = argc - 1; /*<-- COMPTEUR A ARGC - 1 CAR ARGV[1] C LE ./a.out ET ON VEUT COMMENCER PAR LA FIN DE ARGC POUR PRINT EN REVERSE LES ARGUMENTS -->*/
newline = '\n';
	
/*<-- CHAQUE ARGUMENT EST COMPTÉ COMME UNE NOUVELLE CHAINE DE CHARACTERE DONC AFFICHE JUSTE CHAQUE CHAR, PASSE UNE LIGNE ET CHANGE D'ARGV[Î] EN BOUCLE JUSQU'A FIN D'ARGV -->*/
	while (i < argc && argc != 1)
	{
		/*printf("argc = %i\n", argc)*/;  /* <-- TEST -- */
		write(1, argv[i], ft_strlen(argv[i])); /* <-- WRITE LE CHAR I DE ARGV A LA LONGEUR DE I RETOURNÉ PAR LA FT_STRLEN --> */
		write( 1, &newline, 1); /*<-- NEWLINE EN MÉMOIRE = \n --> */
		i--; /* <-- DECREMENTE I POUR DESCENDRE -->*/
		argc--;
	}
return (0);
}
