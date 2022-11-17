/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:49 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    char cap;

    i = 0;
    cap = 1;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(cap)
                str[i] = (str[i] - 32);
            cap = 0;
        }
        else if (str[i] >= 48 && str[i] <= 57)
            cap = 0;
        else
            cap = 1;
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "asdAfasf";
    char str2[] = "Asdaq-asdasd";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    return (0);
}