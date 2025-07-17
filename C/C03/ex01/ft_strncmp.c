/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:24:46 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/16 20:01:12 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && i < n)
	{
		i++;
	}
	return ((str1[i] - str2[i]));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)

{
	printf("\n%d", strncmp("hell", "hell", 4));
	printf("\n%d", ft_strncmp("hell0dd", "hell01", 6));
	return (0);
}
*/
