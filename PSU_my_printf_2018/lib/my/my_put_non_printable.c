/*
** EPITECH PROJECT, 2018
** my_put_non_printable
** File description:
** my_printf
*/

#include "lib.h"
#include <unistd.h>

int my_put_non_printable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] < 127) {
            my_putchar(str[i]);
        } else {
            my_non_printable_octal(str[i]);
        }
    }
}

int my_non_printable_octal(char str)
{
    my_putchar('\\');
    if (str < 8) {
        my_putstr("00");
        my_put_oct(str);
    } else if (str < 32) {
        my_putchar('0');
        my_put_oct(str);
    } else {
        my_put_oct(str);
    }
    return (0);
}
