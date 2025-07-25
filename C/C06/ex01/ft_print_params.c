/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 01:40:45 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/19 02:37:45 by kkaced           ###   ########.fr       */
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
	char	n;

	i = 1;
	n = '\n';
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, &n, 1);
		i++;
	}
	return (0);
}
