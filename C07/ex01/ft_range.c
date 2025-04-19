/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:43:20 by qludger           #+#    #+#             */
/*   Updated: 2025/04/19 14:43:01 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *res;
    int i;
    int size;
    
    if (min >= max)
        return (NULL);
    size = max - min;
    res = malloc(sizeof(int) * size);
    if (!res)
        return (NULL);
    
    i = 0;
    while (i < size)
    {
        res[i] = min + i;
        i++;
    }
    return (res);
}
