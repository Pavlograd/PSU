/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** my_printf
*/

#include "lib.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    char c;

    for (int i = 0; i < len; i++) {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        len--;
    }
    return str;
}
