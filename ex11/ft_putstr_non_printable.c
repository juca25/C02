#include <stdio.h>
#include <unistd.h>

int ft_char_is_printable(char a)
{
    return (a >= 32 && a <= 126);
}

void ft_putchar(char b)
{
    write(1, &b, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if(ft_char_is_printable(str[i]))
            ft_putchar(str[i]);
        else
        {
            ft_putchar(92);
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        i++;
    }
}

int main(void)
{
    char str[]= "Coucou\n tu vas bien ?";

    ft_putstr_non_printable(str);
}