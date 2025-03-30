/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 14:30:56 by qludger           #+#    #+#             */
/*   Updated: 2025/03/29 22:52:38 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
        write (1, "2147483648", 10);
    }
    if (nb >= 0 && nb < 10)
    {
        ft_putchar(nb + '0');
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
/*
int main()
{
    ft_putnbr(42);
    write (1, "\n", 1);
    ft_putnbr(0);
    write (1, "\n", 1);
    ft_putnbr(-42);
    write (1, "\n", 1);
    ft_putnbr(-2147483648);
    write (1, "\n", 1);
}
*/