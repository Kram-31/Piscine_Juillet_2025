/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruch03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aule-gue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 10:31:20 by aule-gue          #+#    #+#             */
/*   Updated: 2025/07/12 15:20:10 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
void	ft_wh(w, n, c, y, x)
{
	while (w > 0)
		{
			ft_putchar('B');
			while (c > 0)
			{
				ft_putchar(' ');
				c--;
				if (c == 0)
					ft_putchar('B');
			}
			ft_putstr(n);
			c = x - 2;
			w--;
		}
		if (y != 1)
		{
			ft_putchar('A');
			while (c > 0)
			{
				ft_putchar('B');
				c--;
				if (c == 0)
					ft_putchar('C');
			}
		}
}

void	rush03(int x, int y)
{
	int	c;
	char	n;
	int	w;

	n = "\n";

	if ((x <= 0) || (y <= 0))
	{
		ft_putchar(' ');
	}
	ft_putchar('A');
	c = x - 2;
	if (x > 0)
	{
		while (c > 0)
		{
			ft_putchar('B');
			c--;
		}
		if (c == 0)
			ft_putchar('C');
		c = x - 2;
		ft_putstr(n);
		w = y -2;
		ft_wh(w, n, c, y, x);
	}
}
