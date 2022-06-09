/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** my_putstring
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "cly_io.h"

void my_printchar(va_list list)
{
    char c = va_arg(list, int);
    write(1, &c, 1);
}

void my_printstr(va_list list)
{
    char *str = va_arg(list, char *);
    int i = 0;
    while (str[i] != '\0') {
        cly_putchar(str[i]);
        i += 1;
    }
}
