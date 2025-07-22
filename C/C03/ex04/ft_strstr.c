/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:41:02 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/22 04:08:44 by kkaced           ###   ########.fr       */
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
	return (NULL);
}
/*

int main()

{
        char dest[100] = "its the way baby girl";
        char src[] = "the";
        ft_strstr(dest, src);
        return (0);
}
*/
