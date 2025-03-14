/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qludger <qludger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:07:28 by qludger           #+#    #+#             */
/*   Updated: 2025/03/05 11:25:38 by qludger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;
    while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] =='+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}
/*
#include <stdio.h>
int main()
{
    printf("%d\n", ft_atoi("200"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("-20"));
    printf("%d\n", ft_atoi("4500000"));
}
*/