/*
** EPITECH PROJECT, 2018
** disp_stdarg
** File description:
** bootstrap my_printf
*/

#include <stdarg.h>
#include "lib.h"

int disp_stdarg(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'i')
            my_put_nbr(va_arg(ap, int));
        if (s[i] == 'c')
            my_putchar(va_arg(ap, int));
        if (s[i] == 's')
            my_putstr(va_arg(ap, char *));
        my_putchar('\n');
    }
    va_end(ap);
}
