/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:02:27 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/13 13:25:43 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 +1;
			while (d3 <= '9')
			{
				ft_write (d1);
				ft_write (d2);
				ft_write (d3);
				if (!(d1 == '7'))
					write (1, ", ", 2);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
