/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:57:33 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/13 17:58:20 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	debut;
	int	fin;
	int	temp;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut++;
		fin--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

	printf("Tableau original : ");
	i = 0;
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Tableau inversé :  ");
	i = 0;
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
