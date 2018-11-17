/*
** EPITECH PROJECT, 2018
** unit_tests
** File description:
** my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../../include/my.h"

int my_printf(char *s, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, print_string, .init = redirect_all_std)
{
    my_printf("%s", "Hello");
    cr_assert_stdout_eq_str("Hello");
}

Test(my_printf, print_int_i, .init = redirect_all_std)
{
    my_printf("%i", 45);
    cr_assert_stdout_eq_str("45");
}

Test(my_printf, print_int_d, .init = redirect_all_std)
{
    my_printf("%d", -45);
    cr_assert_stdout_eq_str("-45");
}

Test(my_printf, print_binary, .init = redirect_all_std)
{
    my_printf("%b", 45);
    cr_assert_stdout_eq_str("101110");
}

Test(my_printf, print_c, .init = redirect_all_std)
{
    my_printf("%c", 'H');
    cr_assert_stdout_eq_str("H");
}

Test(my_printf, print_string_return, .init = redirect_all_std)
{
    my_printf("%s\n", "Hello");
    cr_assert_stdout_eq_str("Hello\n");
}

Test(my_printf, print_unsigned, .init = redirect_all_std)
{
    my_printf("%u", 45);
    cr_assert_stdout_eq_str("45");
}

Test(my_printf, print_pourcentage, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, print_hex, .init = redirect_all_std)
{
    my_printf("%x", 76);
    cr_assert_stdout_eq_str("4C");
}

Test(my_printf, print_oct, .init = redirect_all_std)
{
    my_printf("%o", 546);
    cr_assert_stdout_eq_str("1042");
}

Test(my_printf, print_non_printable, .init = redirect_all_std)
{
    char str[5];

    str[0] = 35;
    str[1] = 87;
    str[2] = 97;
    str[3] = 8;
    my_printf("%S", str);
    cr_assert_stdout_eq_str("#Wa\\010");
}
