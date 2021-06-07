/*
** EPITECH PROJECT, 2021
** putstr
** File description:
** s
*/

#include "my.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
