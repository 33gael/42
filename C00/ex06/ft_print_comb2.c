/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:44:20 by qludger           #+#    #+#             */
/*   Updated: 2025/02/02 21:46:31 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 00;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(a + '0');
            ft_putchar(b + '0');
            if (!(a == 98 && b == 99))
                write (1, ", ", 2);
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
}