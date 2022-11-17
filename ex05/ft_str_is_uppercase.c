/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:13 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
       if(str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char *str = "Asdafasafsfs-as--1232142141";
    char *str2 = "ABCD";
    char *str3 = "";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    printf("%d %s\n", ft_str_is_alpha(str3), str3);
    return (0);
}