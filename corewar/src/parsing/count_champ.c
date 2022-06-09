/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** count_champ.c
*/

#include "corewar.h"

int count_champ(int ac, char **av)
{
    int count = 0;

    for (int a = 0; a < ac; a++) {
        if (cly_strcmp(cly_revnstr(av[a], 4), "roc.") == 0) {
            count++;
        }
    }
    if (count < 2)
        exit(84);
    return count;
}
