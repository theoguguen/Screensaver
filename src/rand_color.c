/*
** EPITECH PROJECT, 2021
** rand
** File description:
** color
*/

#include "my.h"

static int rand_color(int coord)
{
    int res = 0;
    int i = 1;

    while (i <= coord){
        res = rand() % coord + 1;
        i++;
    }
    return res;
}

sfColor random_color()
{
    sfColor i;
    i.r = rand_color(255);
    i.g = rand_color(255);
    i.b = rand_color(255);
    i.a = 255;
    return i;
}
