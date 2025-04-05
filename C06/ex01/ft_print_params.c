/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:21:32 by qludger           #+#    #+#             */
/*   Updated: 2025/04/03 12:41:13 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    (void) argc;
    while (argv[i])
    {
        while (argv[i][j])
        {
            write (1, &argv[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
        i++;
        j = 0;
    }
}