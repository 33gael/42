/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:37:14 by qludger           #+#    #+#             */
/*   Updated: 2025/04/06 11:49:32 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[argc - 1] && argc > 1)
    {
        while (argv[argc - 1][i])
        {
            write (1, &argv[argc - 1][i], 1);
            i++;
        }
        argc--;
        i = 0;
        write(1, "\n", 1);
    }
}