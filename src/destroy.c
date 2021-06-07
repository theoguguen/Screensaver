/*
** EPITECH PROJECT, 2021
** destroy
** File description:
** d
*/

#include "framebuffer.h"

void destroy(framebuffer_t *buf, sfTexture *t, sfSprite *s, sfRenderWindow *w)
{
    framebuffer_destroy(buf);
    sfSprite_destroy(s);
    sfTexture_destroy(t);
    sfRenderWindow_destroy(w);
}
