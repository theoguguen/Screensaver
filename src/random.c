/*
** EPITECH PROJECT, 2021
** rand
** File description:
** rand
*/

#include "my.h"

int rand_coord(int coord)
{
    int res = 0;
    int i = 1;

    while (i <= coord){
        res = rand() % coord + 6;
        i++;
    }
    return res;
}
