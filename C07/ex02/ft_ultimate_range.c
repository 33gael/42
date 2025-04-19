/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:44:33 by qludger           #+#    #+#             */
/*   Updated: 2025/04/19 15:07:53 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int res;

    i = 0;
    if(min >= max)
        return (NULL);
    *range = max - min;
    if (*range[i])
    {
        res = malloc(sizeof(int) * **range);
        return (*range);
        i++;
    }
    else
        return (-1);
    return (res);
}