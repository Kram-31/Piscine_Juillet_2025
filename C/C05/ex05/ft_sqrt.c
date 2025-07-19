/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:18:23 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/19 01:33:09 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while( i < ( nb / 2))
	{
		if ((i * i ) == nb)
		{
			write (1, &nb, 1);
			return (i);
		}
		i++;
	}
	return (0);

}

#include <stdio.h>

int	main(void)
{
	printf("la racine carré de 4 est :%i\n", ft_sqrt(8));
}
