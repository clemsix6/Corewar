/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** create_core_file.c
*/

#include "asm.h"

void create_core_file(asm_t *data, char *name)
{
    cly_strcat(name, ".cor");
    data->fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (data->fd == -1) {
        cly_write(1, "Failed to create file\n");
    } else {
        cly_write(1, "File as been created\n");
    }
}
