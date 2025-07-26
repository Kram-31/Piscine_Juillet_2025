/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elibouch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:11:23 by elibouch          #+#    #+#             */
/*   Updated: 2025/07/26 12:20:52 by elibouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

//open,read
#include <fcntl.h>

//close
#include <unistd.h>

//malloc
#include <stdlib.h>

//printf
#include <stdio.h>


/*just under here, write the functions that you need in other files than the one where you declared it so they can share
 *example:
 *int     ft_pars(char *str); don't forget the ';' at the end so the header understand that this is a prototype.
 *
 *
 *
 * 
 */
int     ft_pars(char *str);




#endif
