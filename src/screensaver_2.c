/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myscreensaver-theo.guguen
** File description:
** screensaver_2
*/

#include "framebuffer.h"
#include "my.h"

void circ(framebuffer_t *f, sfTexture *t, sfRenderWindow *w, sfSprite *s)
{
    sfVector2i center;
    sfColor color;
    int i = 1;
    int time = 5;

    center.x = rand_coord(595);
    center.y = rand_coord(795);
    while (i <= time){
        color = random_color();
        d_circle(f, center, 5, color);
        i++;
    }
    sfTexture_updateFromPixels(t, f->pixels, 800, 600, 0, 0);
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, s, NULL);
    sfRenderWindow_display(w);
}

int second_screensaver()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* text;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "2", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    framebuffer = framebuffer_create(800, 600);
    text = sfTexture_create(800, 600);
    if (!text)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, text, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        circ(framebuffer, text, window, sprite);
    }
    destroy(framebuffer, text, sprite, window);
    return EXIT_SUCCESS;
}
