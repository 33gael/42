/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:44:33 by qludger           #+#    #+#             */
/*   Updated: 2025/04/19 18:32:37 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if(min >= max)
    {
        *range = NULL;
        return(0);
    }
    *range = malloc(sizeof(int) * (max - min));
    if (*range == 0)
        return (0);
    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return (i);
}
