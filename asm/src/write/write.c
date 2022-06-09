/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** write.c
*/

#include "asm.h"

void write_in_file(asm_t *data)
{
    int i = 0;
    int size = data->byte_size;
    long long int magic_nb = little_to_big_endian(COREWAR_EXEC_MAGIC);
    write(data->fd, &magic_nb, sizeof(magic_nb));
    write(data->fd, data->name, PROG_NAME_LENGTH);
    write(data->fd, &i, sizeof(i));
    write(data->fd, &size, sizeof(size));
    write(data->fd, data->comment, COMMENT_LENGTH);
    write(data->fd, &i, sizeof(i));
}
