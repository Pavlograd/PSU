/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf project
*/

#include "lib.h"
#include <stdarg.h>
#include <stdlib.h>

int my_print(char a, char b)
{
    if (a == 'h' && b == 'd')
        return (0);
    if (a == 'l' && b == 'd')
        return (0);
    if (a == 'l' && b == 'u')
        return (0);
    if (a != '%' || b == '%')
        my_putchar(b);
}

int if_percent(char a)
{
    int nb = 0;

    if (a == '%')
        nb++;
    return nb;
}

int my_print_if_percent2(char *a, va_list ap1)
{
    va_list ap2;

    va_copy(ap2, ap1);
    if (a[0] == 'p')
        my_put_point(va_arg(ap2, unsigned int));
    if (a[0] == 'h' && a[1] == 'd')
        my_put_short(va_arg(ap2, int));
    if (a[0] == 'l' && a[1] == 'd')
        my_put_long(va_arg(ap2, long));
    if (a[0] == 'l' && a[1] == 'l' && a[2] == 'd')
        my_put_llong(va_arg(ap2, long long));
    if (a[0] == 'S')
        my_put_non_printable(va_arg(ap2, char *));
    if (a[0] == 'l' && a[1] == 'u')
        my_put_lunsigned(va_arg(ap2, long unsigned int));
    if (a[0] == 'l' && a[1] == 'l' && a[2] == 'u')
        my_put_llunsigned(va_arg(ap2, long long unsigned int));
}

int my_print_if_percent(char *a, va_list ap)
{
    va_list ap1;

    va_copy(ap1, ap);
    if (a[0] == 'b')
        my_put_bin(va_arg(ap1, unsigned int));
    if (a[0] == 'u')
        my_put_unsigned(va_arg(ap1, unsigned int));
    if (a[0] == 'x' || a[0] == 'X')
        my_put_hex(va_arg(ap1, unsigned int));
    if (a[0] == 'o')
        my_put_oct(va_arg(ap1, unsigned int));
    my_print_if_percent2(a, ap1);
}

int my_printf(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0; s[i] != '\0'; i++) {
        i += if_percent(s[i]);
        if (s[i - 1] == '%') {
            if (s[i] == 'i' || s[i] == 'd')
                my_put_nbr(va_arg(ap, int));
            if (s[i] == 'c')
                my_putchar(va_arg(ap, int));
            if (s[i] == 's') {
                verify_nbr(ap);
                my_putstr(va_arg(ap, char *));
            }
            my_print_if_percent(s + i, ap);
        }
        my_print(s[i - 1], s[i]);
    }
    va_end(ap);
}
