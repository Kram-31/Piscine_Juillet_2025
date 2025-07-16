/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:50:06 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 20:09:59 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
    int num1;
    int num2;

    num1 = 5;
    num2 = 10;

    printf("Avant l'appel à ft_swap: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Après l'appel à ft_swap: num1 = %d, num2 = %d\n", num1, num2);

    return (0);
}
*/
