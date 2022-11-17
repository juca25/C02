/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:20 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
       if(str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char *str = "Asdafasafsfs-as--1232142141";
    char *str2 = "asdafasf";
    char *str3 = "á";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    printf("%d %s\n", ft_str_is_alpha(str3), str3);
    return (0);
}