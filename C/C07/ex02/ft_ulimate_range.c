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
#include <unistd.h>

int     ft_utimate_range(int **range, int min, int max)
{
        int     i;
        int     *d;

        if (min >= max)
                return (NULL);
        
        d = malloc (max * sizeof(int));
        if (!d)
                return (NULL);
        i = 0;
        while (i < max)
        {
                d[i] = min + i;
                i++;
        }
        return (d);
        free(d);
}
