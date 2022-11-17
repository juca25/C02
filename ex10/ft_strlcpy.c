/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:10:57 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:10:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_length(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;    
    if(size != 0)
    {
        while(src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    return (ft_length(src));
}

int main(void)
{
    char src[] = "1507";
    char dest[] = "asdAfasf";
    printf("%s, %s,%lu\n",dest, src, strlen(src));
    printf("%d", ft_strlcpy(dest, src, strlen(dest)));
    return (0);
}