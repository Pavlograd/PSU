/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** task02
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
int my_printf(char *s, ...);
int my_put_bin(unsigned int nb);
int my_put_unsigned(unsigned int nb);
int my_print(char *a, char b);
int my_intlen(int nb);
char *my_revstr(char *str);
int my_put_hex(unsigned int nb);
int my_put_oct(unsigned int nb);
int my_print_if_percent2(char *a, va_list *ap1);
int my_put_non_printable(char *str);

#endif /* MY_H_ */
