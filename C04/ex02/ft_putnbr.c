/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:30:41 by qludger           #+#    #+#             */
/*   Updated: 2025/03/02 12:23:17 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb == -2147483648)
    {
        write (1, "2147483648", 11);
    }
    if (nb >= 0 && nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else if (nb > 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
/*
int main()
{
    ft_putnbr(42);
}
*/