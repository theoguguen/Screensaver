/*
** EPITECH PROJECT, 2021
** screensaver
** File description:
** one
*/

#include "framebuffer.h"
#include "my.h"

void squa(framebuffer_t *buf, sfTexture *text, sfRenderWindow *wi, sfSprite *s)
{
    int i;
    int time = 450;

    i = 0;
    while (i <= time){
        r_sq(buf, 600, i, 150, i, sfMagenta);
        r_sq(buf, 600, 650 - i, 150, i, sfYellow);
        r_sq(buf, 600 - i, 325, 150, 0, sfBlack);
        sfTexture_updateFromPixels(text, buf->pixels, 800, 600, 0, 0);
        sfRenderWindow_clear(wi, sfBlack);
        sfRenderWindow_drawSprite(wi, s, NULL);
        sfRenderWindow_display(wi);
        i = i + 3;
    }
}

int first_screensaver()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;
    
    window = sfRenderWindow_create(mode, "1", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    framebuffer = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        squa(framebuffer, texture, window, sprite);
    }
    destroy(framebuffer, texture, sprite, window);
    return EXIT_SUCCESS;
}
