/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:57:45 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/22 22:34:07 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main (void)
{
	int nb;
	nb = 12;
	printf("lenbrpremiers a partir de %d est %d", nb,  ft_find_next_prime(nb));
	
}
*/
