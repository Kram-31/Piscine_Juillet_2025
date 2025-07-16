/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:51:44 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 19:52:57 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h> 

int main(void)
{
    int num1 = 17;
    int num2 = 5;
    int result_div; 
    int result_mod; 

    printf("Avant l'appel: a = %d, b = %d\n", num1, num2);

    ft_div_mod(num1, num2, &result_div, &result_mod);

    printf("Après l'appel: Quotient = %d, Reste = %d\n", result_div, result_mod);

    num1 = 10;
    num2 = 3;
    printf("\nAvant l'appel: a = %d, b = %d\n", num1, num2);
    ft_div_mod(num1, num2, &result_div, &result_mod);
    printf("Après l'appel: Quotient = %d, Reste = %d\n", result_div, result_mod);

    return (0);
}
*/
