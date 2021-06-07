/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** h
*/

#include "framebuffer.h"

#ifndef _MY_H_
#define _MY_H_

void my_putchar(char c);

void my_putstr(char *str);

int my_put_nbr(int nb);

void my_put_unsigned_nbr(unsigned int nb);

void my_flags(const char *src, int i, va_list list);

int my_printf(const char *src, ...);

void d_circle(framebuffer_t *framebuff, sfVector2i c, int rad, sfColor color);

void help();

void error();

void arg_error();

void desc();

int rand_coord(int coord);

void lv_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color);

void uvline(framebuffer_t *framebuff, int x, int y, int size, sfColor color);

void lh_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color);

void uh_line(framebuffer_t *framebuff, int x, int y, int size, sfColor color);

int first_screensaver();

int second_screensaver();

void l_sq(framebuffer_t *buffer, int x, int y, int size, int i, sfColor color);

void r_sq(framebuffer_t *buffer, int x, int y, int size, int i, sfColor color);

sfColor random_color();

int my_strcmp(char *s1, char const *s2);

void destroy(framebuffer_t *f, sfTexture *t, sfSprite *s, sfRenderWindow *w);

#endif
