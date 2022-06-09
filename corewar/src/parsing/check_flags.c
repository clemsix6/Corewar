/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** check_flags.c
*/

#include "corewar.h"

void error_flags(parsing_t *parsing)
{
    if (parsing->n != 1)
        exit(84);
    if (parsing->dumb != 1)
        exit(84);
}

parsing_t *check_flags(parsing_t *parsing, char *av)
{
    if (cly_strcmp(av, "-n") == 0)
        parsing->n = 1;
    if (cly_strcmp(av, "-a") == 0)
        exit(0);
    if (cly_strcmp(av, "-dumb") == 0)
        parsing->dumb = 1;
    // error_flags(parsing);
    return parsing;
}
