/*
** EPITECH PROJECT, 2021
** draw
** File description:
** square
*/

#include "framebuffer.h"
#include "my.h"

void l_sq(framebuffer_t *buffer, int x, int y, int size, int i, sfColor color)
{
    lh_line(buffer, x + i, y, size, color);
    lv_line(buffer, x + i, y - size, size, color);
    uh_line(buffer, x + size + i, y - size, size, color);
    lv_line(buffer, x + i, y, size, color);
}

void r_sq(framebuffer_t *buffer, int x, int y, int size, int i, sfColor color)
{
    uh_line(buffer, x - i, y, size, color);
    uvline(buffer, x - i, y + size, size, color);
    lh_line(buffer, x - size - i, y + size, size, color);
    uvline(buffer, x - i, y, size, color);
}
