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
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int i;
	

	dest_len = 0;
	src_len = ft_strlen(src);

	while (dest[dest_len] < size && dest[dest_len])
		dest_len++;
// cas erreur exo 
	if (dest_len >= size)
		return (size + src_len);
//return la len qu'on a essaye de crée
	i = 0; // on a size - dest_len - 1 place pour src
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
// bit nul a la fin
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
} // return la taille qu'on voulais crée
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
