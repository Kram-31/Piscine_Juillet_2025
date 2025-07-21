/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:03:11 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/19 00:28:10 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facteur;

	facteur = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb < 1)
		return (0);
	while (nb)
	{
		facteur = facteur * nb;
		nb--;
	}
	return (facteur);
}
