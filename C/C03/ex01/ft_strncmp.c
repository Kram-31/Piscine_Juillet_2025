/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:24:46 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/17 15:20:48 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && tmp == 0 && i < n)
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
	printf("\n%d", strncmp("hell0dd", "hell011111", 10));
	printf("\n%d", ft_strncmp("hell0dd", "hell011111", 10));
	return (0);
}
*/
