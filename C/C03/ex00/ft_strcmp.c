/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:35:15 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/17 15:08:07 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	i;
	unsigned int	tmp;

	i = 0;
	tmp = 0;
	while ((str1[i] || str2[i]) && tmp == 0)
	{
		tmp = str1[i] - str2[i];
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)	
{

	printf("\n%d", strcmp("", "h"));
	printf("\n%d", ft_strcmp("", "h"));
	printf("\n%d", ft_strcmp("hell11", ""));
	printf("\n%d", strcmp("hell11", ""));
	

	return (0);
}
*/
