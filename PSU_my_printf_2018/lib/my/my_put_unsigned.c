/*
** EPITECH PROJECT, 2018
** my_put_unsigned
** File description:
** my_printf
*/

#include "lib.h"

int my_put_unsigned(unsigned int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_put_nbr(nb);
    } else {
        my_putchar(48 + nb);
    }
}

int my_put_lunsigned(long unsigned int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_put_nbr(nb);
    } else {
        my_putchar(48 + nb);
    }
}

int my_put_llunsigned(long long unsigned int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_put_nbr(nb);
    } else {
        my_putchar(48 + nb);
    }
}
