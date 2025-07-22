/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:02:53 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/22 02:52:46 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < size - j - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>
int main()

{
	char dest[100] = "c'est qui ";
	char src[] = "c'est moi et non c'est pas moi ";
	ft_strlcat(dest, src, 100);
	printf("dest : %s", dest);
	return (0);
}
*/
