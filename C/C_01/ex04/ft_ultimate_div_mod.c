/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:53:35 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 19:55:36 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *a;
}

/*
#include <stdio.h>

int main(void)
{
	int num1 = 17;
	int num2 = 5; 

	printf("Avant l'appel: a = %d, b = %d\n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);
      	printf("Après l'appel: a = %d, b = %d\n", num1, num2);
	return (0);
}
*/
