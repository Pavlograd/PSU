/*
** EPITECH PROJECT, 2018
** my_put_oct
** File description:
** my_printf
*/

#include "lib.h"
#include <stdlib.h>

int my_put_oct(unsigned int nb)
{
    char *oct = malloc(sizeof(nb));

    for (int i = 0; nb != 0; i++) {
        oct[i] += nb % 8 + '0';
        nb /= 8;
    }
    oct = my_revstr(oct);
    my_putstr(oct);
    free(oct);
}
