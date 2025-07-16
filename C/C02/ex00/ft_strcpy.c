/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:31:14 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/14 00:09:21 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	mot1;
	char	mot2;

	mot1 = 'K';
	mot2 = 'd';

	printf("mon prénom est : %s.\n Mon nom est : %s. \n" , &mot1, &mot2);
	ft_strcpy(&mot1, &mot2);
	printf("mon prénom est : %s.\n Mon nom est : %s" , &mot1, &mot2);
}
*/
