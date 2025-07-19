/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 02:28:43 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/19 02:36:38 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	char	newline;

	newline = '\n';
	i = argc - 1;
	while (i < argc && argc != 1)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, &newline, 1);
		i--;
		argc--;
	}
	return (0);
}
