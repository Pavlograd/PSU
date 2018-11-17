/*
** EPITECH PROJECT, 2018
** my_put_bin
** File description:
** my_printf
*/

#include "lib.h"

int my_put_bin(unsigned int nb)
{
    int x = 0;
    int binaire = 0;
    int tab[15];

    if (nb == 1) {
        my_putchar('1');
        return (0);
    }
    while (nb > 0) {
        tab[x] = nb % 2;
        nb /= 2;
        x++;
    }
    for (int i = x - 1; i >= 0; i--) {
        binaire += tab[i]*my_power(i);
    }
    my_put_nbr(binaire);
}

int my_power(unsigned int nb)
{
    int pow = 10;

    for (int i = 1; i < nb; i++) {
        pow *= 10;
    }
    return pow;
}
