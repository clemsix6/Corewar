/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** corewar.h
*/

#ifndef COREWAR_COREWAR_H
    #define COREWAR_COREWAR_H
    #include "../include/cly/cly_io.h"
    #include "../include/cly/cly_lib.h"
    #include "../include/cly/cly_linked_list.h"
    #include "../include/cly/cly_string.h"
    #include "../include/op.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>

typedef struct parsing_s {
    int dumb;
    int n;
    int a;
} parsing_t;

typedef struct champions_s {
    int nb_champ;
    int	*live;
    int	*champ_id;
    header_t *header;
} champions_t;

void help(void);
parsing_t *check_flags(parsing_t *parsing, char *av);
int manage_parsing(champions_t *champ, int ac, char **av);
header_t *read_champ(champions_t *champ, char *filepath);
int swap_endian(int nb);
champions_t *init_champ(champions_t *champion, char **av);
int count_champ(int ac, char **av);

#endif
