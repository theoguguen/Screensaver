/*
** EPITECH PROJECT, 2021
** putnbr
** File description:
** e
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
    else if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    int n = nb % 10 + '0';
    nb = nb / 10;
    if (nb > 0)
        my_put_nbr(nb);
    my_putchar(n);
    return 0;
}

void my_put_unsigned_nbr(unsigned int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}

void my_flags(const char *src, int i, va_list list)
{
    if (src[i] == '%'){
        i++;
        switch (src[i]){
        case 'd':
            my_put_nbr(va_arg(list, int));
            break;
        case 's':
            my_putstr(va_arg(list, char *));
            break;
        case 'i':
            my_put_nbr(va_arg(list, int));
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        default:
            break;
        }
    }if (src[i - 1] != '%')
        my_putchar(src[i]);
}

int my_printf(const char *src, ...)
{
    va_list list;

    int i = 0;
    va_start(list, src);

    while (src[i] != '\0'){
        my_flags(src, i, list);
    i++;
    }
    va_end(list);
    return 0;
}
