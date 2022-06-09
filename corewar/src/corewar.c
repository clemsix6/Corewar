/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** corewar.c
*/

#include "corewar.h"

int main(int ac, char **av)
{
    champions_t *champ = malloc(sizeof(champions_t));

    if (ac == 2 && cly_strcmp(av[1], "-h") == 0)
        help();
    init_champ(champ, av);
    return 0;
}
