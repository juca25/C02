/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:29 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
       if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 32);
        i++;
    }
    return (str);
}
int main(void)
{
    char str[] = "asdAfasf";
    char str2[] = "";
    printf("%d %s\n", ft_str_is_alpha(str), str);
    printf("%d %s\n", ft_str_is_alpha(str2), str2);
    return (0);
}