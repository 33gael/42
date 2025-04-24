/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:00:25 by marvin            #+#    #+#             */
/*   Updated: 2025/04/24 12:00:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *fill(int size, char c)
{
    int i;
    char *res;

    i = 0;
    res = malloc(sizeof(char) * (size + 1));
    while (i < size)
    {
        res[i] = c;
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main()
{
    printf("%s", fill(5, 'h'));
}