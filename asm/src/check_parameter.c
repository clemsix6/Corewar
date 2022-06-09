/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** check_parameter.c
*/

#include "asm.h"

int add_nb_args(int nb_args, char **buffer, int a)
{
    for (int i = 0; buffer[a][i] != 0; i++) {
        if (buffer[a][i] == ',')
            nb_args++;
    }
    return nb_args;
}

bool check_argument(char **buffer, int type, UNUSED int b)
{
    int nb_args = 1;
    for (int a = 0; buffer[a] != NULL; a++) {
        nb_args = add_nb_args(nb_args, buffer, a);
    }
    if (nb_args == op_tab[type].nbr_args) {
        return false;
    } else {
        cly_write(1, "wrong parameter number, line [%d]\n");
        return true;
    }
}
