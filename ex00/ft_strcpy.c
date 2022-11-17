/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:09:04 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:09:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
return (0);
}

int main(void)
{
    char	src[] = "hola";
	char	dest[] = "mundo";

	printf("%s", strcpy(dest, src));
	return (0);
}