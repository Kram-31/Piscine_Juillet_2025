/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:25:20 by ykolacze          #+#    #+#             */
/*   Updated: 2025/07/18 23:30:29 by ykolacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(long long int nbr, char *base, long long int size)
{
	if (nbr < size)
		write(1, &base[nbr % size], 1);
	else
	{
		ft_putnbr(nbr / size, base, size);
		write(1, &base[nbr % size], 1);
	}
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (i == 0
				&& (base[j] == '+' || base[j] == '-'))
				return (1);
			else if (i != j && base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	nb;
	long long int	size;

	nb = nbr;
	size = 0;
	if (!base)
		return ;
	while (base[size])
		size++;
	if (size < 2 || ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_putnbr(nb, base, size);
}
