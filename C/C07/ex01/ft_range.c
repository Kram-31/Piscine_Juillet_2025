/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaced <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 05:34:56 by kkaced            #+#    #+#             */
/*   Updated: 2025/07/21 01:46:13 by kkaced           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int     *ft_range(int min, int max)
{
        int i;
       // int *dest = NULL;
        i = (max - min) + 1;
       // dest = (int *) malloc (i *sizeof(int));
       // if (max < min)
        //        return (0);
       // if (dest == NULL)
         //       return  NULL;
        while (i <= max)
        {
		printf("%i\n", i);
		i++;
        }

       return 0;
       // free(dest);
}

#include <stdio.h>

int main(void)
{
       // int     *dest = malloc (sizeof(char));
       // dest = ft_range(10, 20);
	// printf("dest apres: \"%ls\"\n", dest);
	ft_range(10,200);
}
