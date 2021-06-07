/*
** EPITECH PROJECT, 2020
** my_screensaver
** File description:
** te
*/

#include "framebuffer.h"
#include "my.h"

void help()
{
    my_printf("Animation rendering in a CSFML window.\n\n");
    my_printf("USAGE\n");
    my_printf(" ./my_screensaver [OPTIONS] animation_id\n");
    my_printf(" animation id\tID of the animation ");
    my_printf("to process (between 1 and 2)\n\n");
    my_printf("OPTIONS\n");
    my_printf(" -d\t\tprint the description of all the animations.\n");
    my_printf(" -h\t\tprint the usage and quit.\n");
}

void error()
{
    my_printf("Bad arguments: 0 given but 1 is required\n");
    my_printf("retry with -h\n");
}

void arg_error()
{
    my_printf("Bad arguments: non-valid argument\n");
    my_printf("retry with -h\n");
}

void desc()
{
    my_printf("1: Squares drawing from bottom corners to top of the window\n");
    my_printf("2: Draws points of random colors at random places\n");
}

int main(int ac, char **av)
{
    if (ac != 2){
        error();
        return 84;
    }if (my_strcmp(av[1], "-h\0") == 0){
        help();
        return 0;
    }if (my_strcmp(av[1], "-d\0") == 0){
        desc();
        return 0;
    }if (my_strcmp(av[1], "1\0") == 0){
        first_screensaver();
        return 0;
    }if (my_strcmp(av[1], "2\0") == 0){
        second_screensaver();
        return 0;
    }else{
        arg_error();
        return 84;
    }
}
