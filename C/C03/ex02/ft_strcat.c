/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:09:43 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/16 20:02:38 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()

{
	char dest[100] = "c'est qui ";
	char src[] = "c'est moi et non c'est pas moi ";
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
	return (0);
}
*/
