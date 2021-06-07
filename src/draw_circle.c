/*
** EPITECH PROJECT, 2021
** circle
** File description:
** le
*/

#include "framebuffer.h"

void d_circle(framebuffer_t *framebuff, sfVector2i c, int rad, sfColor color)
{
    for (int i = c.y-rad; i <= c.y+rad; i++) {
        for (int j = c.x-rad; j <= c.x+rad; j++) {
            if (pow(j - c.x, 2) + pow(i - c.y, 2) <= pow(rad, 2))
                my_put_pixel(framebuff, j, i, color);
        }
    }
}
