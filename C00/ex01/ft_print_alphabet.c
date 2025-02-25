/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:17:20 by qludger           #+#    #+#             */
/*   Updated: 2025/01/29 12:19:32 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int main()
{
    ft_print_alphabet();
}
*/