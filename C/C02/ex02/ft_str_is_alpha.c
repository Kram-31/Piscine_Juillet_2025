/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:15:19 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/14 19:42:03 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A') || (str[i] <= 'Z' && str[i] >= 'a')
			|| (str[i] <= 'z'))
		{
			return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int		main(void)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	ft_str_is_alpha(alpha);
	return (0);
}
*
