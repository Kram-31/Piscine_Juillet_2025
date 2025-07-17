/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:32:04 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 21:31:55 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	digit_char;

	digit_char = '0';
	while (digit_char <= '9')
	{
		ft_putchar(digit_char);
		digit_char ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
