/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulimate_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:01:48 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/21 15:05:33 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_utimate_range(int **range, int min, int max)
{
        int     i;

        if (min >= max)
		*range = NULL;
                return (0);
        
        *range = malloc (max * sizeof(int));
        if (!*range)
                return (-1);
        i = 0;
        while (i < max)
        {
                range[i] = min + i;
                i++;
        }
        return (range);
}
