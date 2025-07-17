/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:03:20 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/16 21:28:10 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()

{
	char dest[100] = "c'est qui ";
	char src[] = "c'est moi et non c'est pas moi ";
	ft_strncat(dest, src, 31 );
	printf("%s\n", src);
	printf("%s\n", dest);
	char dest1[100] = "c'est qui ";
        char src1[] = "c'est moi et non c'est pas moi ";
	strncat(dest1, src1, 31 );
	printf("%s\n", src1);
	printf("%s\n", dest1);
	return (0);
}
*/
