/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:16:14 by ykolacze          #+#    #+#             */
/*   Updated: 2025/07/17 18:58:44 by ykolacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnstr(char *str, int i)
{
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	to_print[10];
	int		i;

	i = 0;
	to_print[0] = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		to_print[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	ft_putnstr(to_print, (i - 1));
}
