/*
** EPITECH PROJECT, 2018
** my_put_hex
** File description:
** my_printf
*/

#include <stdlib.h>
#include "lib.h"

int my_put_hex(unsigned int nb)
{
    char *hex = malloc(sizeof(nb));

    for (int i = 0; nb != 0; i++) {
        hex[i] += nb % 16 + '0';
        if (hex[i] > '9')
            hex[i] += 7;
        nb /= 16;
    }
    hex = my_revstr(hex);
    my_putstr(hex);
    free(hex);
}
