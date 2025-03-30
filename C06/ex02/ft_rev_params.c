/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:54:52 by qludger           #+#    #+#             */
/*   Updated: 2025/03/29 22:15:22 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int j;

    j = 0;
    while (argv[argc - 1] && argc > 1)
    {
        while (argv[argc - 1][j])
        {
            write (1, &argv[argc - 1][j], 1);
            j++;
        }
        j = 0;
        argc--;
        write(1, "\n", 1);
    }
}