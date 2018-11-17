/*
** EPITECH PROJECT, 2018
** sum_stdarg
** File description:
** boot_strap my_printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "lib.h"

int sum_stdarg(int i, int nb, ...)
{
    int result = 0;
    va_list ap;

    va_start(ap, nb);
    if (i == 0) {
        for (; nb > 0; nb--) {
            result += va_arg(ap, int);
        }
    }
    if (i == 1) {
        for (; nb > 0; nb--) {
            result += my_strlen(va_arg(ap, char *));
        }
    }
    va_end(ap);
    return result;
}
