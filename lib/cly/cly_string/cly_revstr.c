/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_revstr.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_strlen(char const *str);

char *cly_revstr(char *str)
{
    char tmp;
    int i = 0;
    int j = cly_strlen(str) - 1;

    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j--;
        i++;
    }
    return str;
}

char *cly_revnstr(char *str, int n)
{
    char *n_str = malloc(sizeof(char) * n + 1);
    char *rev_str = cly_revstr(str);
    int a = 0;

    for (; a < n; a++) {
        n_str[a] = rev_str[a];
    }
    n_str[a + 1] = '\0';
    return n_str;
}
