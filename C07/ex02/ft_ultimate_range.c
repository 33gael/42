/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:44:33 by qludger           #+#    #+#             */
/*   Updated: 2025/04/24 11:53:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    if(min >= max)
    {
        *range = NULL;
        return(0);
    }
    size = max - min;
    *range = malloc(sizeof(int) * size);
    if (*range == 0)
        return (0);
    i = 0;
    while (i < size)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (i);
}
