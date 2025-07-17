/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:59:48 by edi-maio          #+#    #+#             */
/*   Updated: 2025/07/17 15:37:06 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (j == size)
				return (&str[i - j + 1]);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
