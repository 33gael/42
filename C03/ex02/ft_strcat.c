/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:09:09 by qludger           #+#    #+#             */
/*   Updated: 2025/02/28 17:36:54 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int j;

    j = 0;
    while (dest[j])
        j++;
    while (*src)
    {
        dest[j] = *src;
        j++;
        src++;
    }
    dest[j] = '\0';
    return (dest);
}
/*
int main()
{
    char str1[] = "ça va";
    char str2[] = "salut ";
    printf("%s", ft_strcat(str2, str1));
}
*/