/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** manage_parsing.c
*/

#include "corewar.h"

int check_params(parsing_t *parsing, char **av, int i)
{
    if (av[i][0] == '-') {
        check_flags(parsing, av[i]);
    }
    return 0;
}

int manage_parsing(champions_t *champ, int ac, char **av)
{
    parsing_t parsing;

    if (ac < 2)
        return 84;
    for (int i = 1; av[i]; i++)
        if (check_params(&parsing, av, i) == 84)
            return 84;
    champ->nb_champ = count_champ(ac, av);
    return 0;
}
