/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** read_champ.c
*/

#include "corewar.h"

header_t *read_champ(champions_t *champ, char *filepath)
{
    int file = open(filepath, O_RDONLY);
    int read_file = 0;

    if (file < 0) {
        exit(84);
    }
    read_file = read(file, champ->header, MEM_SIZE);
    if (read_file == -1) {
        exit(84);
    }
    champ->header->magic = swap_endian(champ->header->magic);
    champ->header->prog_size = swap_endian(champ->header->prog_size);
    close(file);
    return champ->header;
}
