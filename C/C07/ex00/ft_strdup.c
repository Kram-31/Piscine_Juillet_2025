/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 03:45:11 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/19 04:43:13 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
			
int     ft_strlen(char *str) // FT_STRLEN pour AVOIR la LONGEUR de LA destination		
{
    int a;				
					
    a = 0;
    while (str[a] != '\0')
    {
        a++;
    }
    return (a);
}

char	*ft_strdup(char *src) //LITTERALMENT la FT_STRCPY mais AVEC malloc NE pas OUBLIER de FREE la MEMOIRE quand PLUS besoin 
{
	unsigned int i;
 	char *dest = NULL;
	unsigned int a;
	
	a = ft_strlen(src);
	dest = (char *) malloc( a * sizeof(char));  //AVEC malloc TU peux DIRECTEMENT dire OUI dest EST un TABLEAU de CHAR et MALLOC a FOIS la TAILLE dune CHAR
	if (dest == NULL) //CAS erreur MALLOC
	return NULL;	//CAS erreur MALLOC
	i = 0;
	while (src[i] != '\0') //COPIE chaque CHAR un PAR un TANT que '\0'
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; //RAJOUTE un '\0' POUR la DEST
	return dest;
	free(dest);

}

#include <stdio.h>

int main(void)
{
	char *dest = malloc(sizeof(char));
	char src1[] = "Salut les piscineux moi c'est kamal le gros bg dla night"; // le mot dans le tableau src
	printf("Le contenu du *src à été copié dans *dest: \n");
	printf("src: %s\n", src1);
    	printf("dest avant: \"%s\"\n", dest);
	dest = ft_strdup(src1);
    	printf("dest apres: \"%s\"\n", dest);
}
