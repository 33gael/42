/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:12:09 by qludger           #+#    #+#             */
/*   Updated: 2025/04/18 23:04:31 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;

    i = 0;
    char *res;
    while (src[i])
        i++;
    res = malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i])
    {
        res[i] = src[i];
        i++;
    }
    return (res);
}
