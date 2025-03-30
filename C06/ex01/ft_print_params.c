/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:44:04 by qludger           #+#    #+#             */
/*   Updated: 2025/03/29 21:54:27 by qludger          ###   ########.fr       */
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
        j = 0;
        i++;
        write(1, "\n", 1);
    }
}