/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aule-gue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:40:23 by aule-gue          #+#    #+#             */
/*   Updated: 2025/07/13 12:40:25 by aule-gue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// permet de faire la premiere et la derniere ligne
void	ft_ligne(int nbr_ligne)
{
	while (nbr_ligne > 0)
	{
		ft_putchar('-');
		nbr_ligne--;
		if (nbr_ligne == 0)
			ft_putchar('o');
	}
}

//permet de reduire le code en le separant en deux parties
void	ft_wh(int lignes, int colonnes, int y, int x)
{
	while (lignes > 0)
	{
		ft_putchar('|');
		while (colonnes > 0)
		{
			ft_putchar(' ');
			colonnes--;
			if (colonnes == 0)
				ft_putchar('|');
		}
		ft_putchar('\n');
		colonnes  = x - 2;
		lignes--;
	}
	if (y != 1)
	{
		ft_putchar('o');
		ft_ligne(colonnes);
	}
}

void	rush00(int x, int y)
{
	int	colonne;
	int	ligne;
	int	n;

	n = '\n';
	if ((x <= 0) || (y <= 0))
	{
		ft_putchar(' ');
	}
	ft_putchar('o');
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
