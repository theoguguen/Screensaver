/*
** EPITECH PROJECT, 2021
** framebuffer
** File description:
** buffer
*/

#include "framebuffer.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    unsigned int i = 0;
    framebuffer_t *framebuffer = NULL;
    framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(sizeof(sfUint8) * width * height * 4);

    while (i < width * height * 4){
        framebuffer->pixels[i] = 0;
        i++;
    }
    return framebuffer;
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}

void my_put_pixel(framebuffer_t *framebuffer, int x, int y, sfColor color)
{
    framebuffer->pixels[(framebuffer->width * 4 * x + y * 4 + 0)] = color.r;
    framebuffer->pixels[(framebuffer->width * 4 * x + y * 4 + 1)] = color.g;
    framebuffer->pixels[(framebuffer->width * 4 * x + y * 4 + 2)] = color.b;
    framebuffer->pixels[(framebuffer->width * 4 * x + y * 4 + 3)] = color.a;
}
