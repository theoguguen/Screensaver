/*
** EPITECH PROJECT, 2021
** putchar
** File description:
** p
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
