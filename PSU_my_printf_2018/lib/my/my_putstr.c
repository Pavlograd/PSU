/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** task02
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 122)
            exit(84);
        if (str[i] > 90 && str[i] < 97)
            exit(84);
    }
    write(1, str, my_strlen(str));
}
