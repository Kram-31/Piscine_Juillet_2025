/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:45:06 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 23:21:17 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{

int arr[size];
int temp[size];
*tab = arr[size];
int i;
int j;
j = 0;
i = size - 1;

while (i >= 0)
{
	temp[j++] = arr[i];
	i--;
}
i = 0; 

while (i < size)
{
	arr[i] = temp[i];
	i++;
}
}
#include <stdio.h>

int	main(void)
{
 int arr[] = {1, 2, 3, 4, 5};
 int size = 5;
 int j;

 printf("tableau original");
 j = 0;
 while(j < size)
{
	 printf("%d ", arr[j]);
	 j++;
}
ft_rev_int_tab(arr, size);
}

