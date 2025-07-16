/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aule-gue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:26:32 by aule-gue          #+#    #+#             */
/*   Updated: 2025/07/12 15:26:32 by aule-gue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// permet de faire la premiere et la derniere ligne
void	ft_ligne(int nbr_ligne)
{
	while (nbr_ligne > 0)
	{
		ft_putchar('B');
		nbr_ligne--;
		if (nbr_ligne == 0)
			ft_putchar('C');
	}
}

//permet de reduire le code en le separant en deux parties
void	ft_wh(int lignes, int colonnes, int y, int x)
{
	while (lignes > 0)
	{
		ft_putchar('B');
		while (colonnes > 0)
		{
			ft_putchar(' ');
			colonnes--;
			if (colonnes == 0)
				ft_putchar('B');
		}
		ft_putchar('\n');
		colonnes  = x - 2;
		lignes--;
	}
	if (y != 1)
	{
		ft_putchar('A');
		ft_ligne(colonnes);
	}
}

void	rush03(int x, int y)
{
	int	colonne;
	int	ligne;
	int	n;

	n = '\n';
	if ((x <= 0) || (y <= 0))
	{
		ft_putchar(' ');
	}
	ft_putchar('A');
	colonne = x - 2;
	if (x > 0)
	{
		ft_ligne(colonne);
		colonne = x - 2;
		ft_putchar('\n');
		ligne = y - 2;
		ft_wh(ligne, colonne, y, x);
	}
}
