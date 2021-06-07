/*
** EPITECH PROJECT, 2021
** h
** File description:
** frame
*/

#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_

struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);

void framebuffer_destroy(framebuffer_t *framebuffer);

void my_put_pixel(framebuffer_t *framebuffer, int x, int y, sfColor color);

void move_square(framebuffer_t *framebuffer, int x, int y, int width,
                 int height, int time, sfColor color);

#endif
