/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:07:00 by ykolacze          #+#    #+#             */
/*   Updated: 2025/07/18 23:57:12 by ykolacze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_convert_str(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

long long int	ft_calcul_nbr(char *str, char *base, int i, int *size)
{
	long long int	nbr;
	long long int	temp;

	nbr = 0;
	temp = ft_convert_str(base, str[i]);
	i++;
	while (temp >= 0)
	{
		nbr *= *size;
		nbr += temp;
		if (str[i])
			temp = ft_convert_str(base, str[i]);
		else
			temp = -1;
		i++;
	}
	return (nbr);
}

int	ft_valid_str(char *str, char *base, int *start_str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	if (ft_convert_str(base, str[i]) == (-1))
		return (0);
	*start_str = i;
	return (1);
}

int	ft_define_valid_base(char *base, int *size)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == '+' || base[j] == '-')
				return (0);
			else if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	*size = i;
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	start_str;
	int	sign;

	start_str = 0;
	sign = 1;
	if (base && str)
	{
		if (!ft_define_valid_base(base, &size))
			return (0);
		if (!ft_valid_str(str, base, &start_str, &sign))
			return (0);
	}
	else
		return (0);
	return (sign * ft_calcul_nbr(str, base, start_str, &size));
}
