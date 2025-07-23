/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:56 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/21 14:59:54 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*d;

	if (min >= max)
		return (NULL);
	max = max - min;
	d = malloc (max * sizeof(int));
	if (!d)
		return (NULL);
	i = 0;
	while (i < max)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
	free(d);
}

//ON A UN COMPTEUR I ET UN POINTEUR D'INT D DONC LE PREMIERS == CAS ERREUR,
// MAX = MAX - MIN POUR AVOIR LA LONGEUR D'INT ENTRE LES DEUX 
//IF (!d) ==  CAS ERREUR MALLOC
// ON ALLOUE MAX * LA L INT A D 
// ON BOUCLE TANT QUE FOIS JUSQUA I < MAX 
// ON AJOUTE CHAQUE INT DANS LE TABLEAU + I POUR CHANGER D'INDEX 
/*
#include <stdio.h>

int main(void)
{
	int *d;
    	int i;
    	int min = 10;
    	int max = 60;
	
	i = 0;
    	d = ft_range(min, max);
    	if (!d)
	{	
        	return 1;
	}
	while(i < (max - min))
	{
		printf("%d ", d[i]);
		i++;
	}
   	 printf("\n");

	free(d);
    return 0;
}
*/
