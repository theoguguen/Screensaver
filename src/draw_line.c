/*
** EPITECH PROJECT, 2021
** draw_line
** File description:
** lines
*/

#include "framebuffer.h"

void lv_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color)
{
    for (int i = 0; i <= size; i++){
        my_put_pixel(framebuff, x + i, y, color);
    }
}

void uvline(framebuffer_t *framebuff, int x, int y, int size, sfColor color)
{
    for (int i = 0; i <= size; i++){
        my_put_pixel(framebuff, x - i, y, color);
    }
}

void lh_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color)
{
    for (int i = 0; i <= size; i++){
        my_put_pixel(framebuff, x, y - i, color);
    }
}

void uh_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color)
{
    for (int i = 0; i <= size; i++){
        my_put_pixel(framebuff, x, y + i, color);
    }
}
