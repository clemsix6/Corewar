/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** init_champ.c
*/

#include "corewar.h"

champions_t *init_champ(champions_t *champ, char **av)
{
    champ->header = malloc(sizeof(header_t) * (champ->nb_champ));
    champ->header = read_champ(champ, av[1]);
    return champ;
}
