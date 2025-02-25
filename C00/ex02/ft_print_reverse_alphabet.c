/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:20:22 by qludger           #+#    #+#             */
/*   Updated: 2025/01/29 12:23:30 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

/*
int main()
{
    ft_print_reverse_alphabet();
}
*/