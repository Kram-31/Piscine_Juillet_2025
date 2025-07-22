/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 06:54:35 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/22 08:16:07 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < size && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	return (j);
}
#include <string.h>
#include <stdio.h>
int main()

{
	char dest[100] = "c'est qui ";
	char src[] = "c'est moi et non c'est pas moi ";
	ft_strlcpy(dest, src, 31 );
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}
