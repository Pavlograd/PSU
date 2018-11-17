/*
** EPITECH PROJECT, 2018
** my_put_point
** File description:
** my_printf
*/

#include "lib.h"

int my_put_point(unsigned int nb)
{
    my_putstr("0x");
    my_put_hex(nb);
}
