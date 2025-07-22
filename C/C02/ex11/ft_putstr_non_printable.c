/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:09:32 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/22 22:55:26 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126 && str[i] != '\0')
		{
			write (1, &str[i], 1);
			str++;
			if (str[i] >= 1 && str[i] <= 31)
			{
				write (1, "\\", 1);
				write (1, &"0123456789abcdef" [str[i] / 16], 1);
				write (1, &"0123456789abcdef" [str[i] % 16], 1);
				str++;
			}
		}
	}
}
/*

int main(void)
{
        ft_putstr_non_printable("Hello\nHow are you? bitcheeeees");
}
*/
