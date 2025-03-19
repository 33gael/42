/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:32:06 by qludger           #+#    #+#             */
/*   Updated: 2025/03/19 17:59:58 by qludger          ###   ########.fr       */
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
    ft_putnbr(48);
    write (1, "\n", 1);
    ft_putnbr(0);
    write (1, "\n", 1);
    ft_putnbr(-42);
}
*/