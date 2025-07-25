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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;
	
	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while( i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);

}
/*
#include <stdio.h>
int main()

{
	char dest[10] = "";
	char src[] = "hello, world";
	ft_strlcpy(dest, src, 1);
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}
*/
