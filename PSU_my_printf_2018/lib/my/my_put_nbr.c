/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** lib
*/

#include "lib.h"
#include <stdlib.h>

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_nbr(nb);
    } else if (nb >= 10) {
        my_put_nbr(nb / 10);
        nb = nb % 10;
        my_put_nbr(nb);
    } else {
        my_putchar(48 + nb);
    }
}

int verify_nbr(va_list ap)
{
    int len;
    va_list ap1;

    va_copy(ap1, ap);
    len = my_intlen(va_arg(ap1, int));
    if (len >= 5) {
        return (0);
    } else {
        exit(84);
    }
}

void my_put_short(short nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_short(nb);
    } else if (nb >= 10) {
        my_put_short(nb / 10);
        nb = nb % 10;
        my_put_short(nb);
    } else {
        my_putchar(48 + nb);
    }
}

void my_put_long(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_long(nb);
    } else if (nb >= 10) {
        my_put_long(nb / 10);
        nb = nb % 10;
        my_put_long(nb);
    } else {
        my_putchar(48 + nb);
    }
}

void my_put_llong(long long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
        my_put_llong(nb);
    } else if (nb >= 10) {
        my_put_llong(nb / 10);
        nb = nb % 10;
        my_put_llong(nb);
    } else {
        my_putchar(48 + nb);
    }
}
