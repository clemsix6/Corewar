/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** load_name.c
*/

#include "asm.h"

void load_name(node_t **node, asm_t *data)
{
    ligne_t *name = get_ligne_by_type(node, 'n');
    for (int i = 0; i < PROG_NAME_LENGTH; i++) {
        data->name[i] = 0;
    }
    for (int i = 1;  name->str[1][i] != '"'; i++) {
        data->name[i - 1] = name->str[1][i];
    }
}
