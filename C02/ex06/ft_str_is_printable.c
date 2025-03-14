/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:33:13 by qludger           #+#    #+#             */
/*   Updated: 2025/02/23 17:36:06 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] != '\0' && str[i] < 32) || str[i] > 126)
        {
            return (0);
        }
        i++;
    }
    return (1);
}