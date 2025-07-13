/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:27:42 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/12 17:08:34 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			ft_putchar((d1 / 10) + '0');
			ft_putchar((d1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((d2 / 10) + '0');
			ft_putchar((d2 % 10) + '0');
			if ((d1 != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d2++;
		}
		d1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
