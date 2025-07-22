/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:37:58 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/14 22:02:24 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{	
		if  (str[i] < 48 ) || (str[i] > 57)
		{
			return (1);
		}
		else 
		{
			return(0);
		}
	}
}
/*
#include <stdio.h>

int main(void)
{
	char *test;
	str[] = "123612636123"
	*test = str;
	ft_str_is_numeric(str[]);
}
*/
