/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:35:15 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/17 13:25:09 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	i;
	unsigned int	tmp;

	i = 0;
	while (str1[i] && str2[i])
	{
		i++;
		if (str2[i] == str1[i])
		return 0;
		if (str1[i] = '\0') || (str2[i] = '\0')
	{
		return 0;
	}
	}
	tmp = str1[i] - str2[i];
	return (tmp);
}

#include <stdio.h>
#include <string.h>
int main(void)	
{
	printf("\n%d", strcmp("h", "h"));
/*	printf("\n%d", strcmp("hell11", "hell"));
	printf("\n%d", ft_strcmp("hell", "hell01"));
	printf("\n%d", ft_strcmp("hell11", "hell"));
	printf("\n%d", ft_strcmp("hell11", "hell11"));
	printf("\n%d", strcmp("hell11", "hell11"));
*/
	return (0);
}
