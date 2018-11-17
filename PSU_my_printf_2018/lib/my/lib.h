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
int my_intlen(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
int my_printf(char *s, ...);
int my_put_bin(unsigned int nb);
int my_power(unsigned int nb);
int my_put_unsigned(unsigned int nb);
int my_put_lunsigned(long unsigned int nb);
int my_put_llunsigned(long long unsigned int nb);
int my_print(char a, char b);
int if_percent(char a);
int my_print_if_percent(char *a, va_list ap);
char *my_revstr(char *str);
int my_put_hex(unsigned int nb);
int my_put_oct(unsigned int nb);
int my_put_point(unsigned int nb);
void my_put_short(short nb);
int my_print_if_percent2(char *a, va_list ap1);
void my_put_llong(long long nb);
void my_put_long(long nb);
int my_put_non_printable(char *str);
int my_non_printable_octal(char str);
int verify_nbr(va_list ap);

#endif /* MY_H_ */
