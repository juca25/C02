/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:09:24 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:09:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while(*str)
    {
        if ((*str < 'A' || *str >'Z') && ( *str < 'a' || *str > 'z'))
            return (0);
        str++;
    }
    return (1);
}

int main(void)
{
    char *str = "Asdafasafsfs-as---¡'asfasf";
    char *str2 = "Aaa";
    char *str3 = "";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    printf("%d %s\n", ft_str_is_alpha(str3), str3);
    return (0);
}