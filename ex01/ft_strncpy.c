/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:09:18 by marvin            #+#    #+#             */
/*   Updated: 2022/11/17 01:09:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(src[i] != '\0' && i < n)
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