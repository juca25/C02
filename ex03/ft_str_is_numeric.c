/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:05 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if (*str < 48 || *str > 57)
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    char *str = "Asdafasafsfs-as---¡'asfasf";
    char *str2 = "12312321";
    char *str3 = "";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    return (0);
}