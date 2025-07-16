/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:53:51 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/13 13:54:38 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int arr2[] = {3, 1, 4, 1, 5, 9, 2, 6};
	int size2 = 8;
	int k;

	printf("Tableau original 2 : ");
	k = 0;
	while(k < size2)
	{
		printf("%d ", arr2[k]);
		k++;
	}
	printf("\n");

	ft_sort_int_tab(arr2, size2);

	printf("Tableau trié 2 :     ");
	k = 0;
	while(k < size2)
	{
		printf("%d ", arr2[k]);
		k++;
	}
	printf("\n");

	return (0);
}
*/