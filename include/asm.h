/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** asm.h
*/

#ifndef COREWAR_ASM_H
    #define COREWAR_ASM_H
    #define UNUSED __attribute__ ((unused))
    #include "cly/cly_io.h"
    #include "cly/cly_lib.h"
    #include "cly/cly_linked_list.h"
    #include "cly/cly_string.h"
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <unistd.h>
    #include "op.h"

typedef struct asm_s {
    int fd;
    char name[129];
    char comment[2049];
    int byte_size;
} asm_t;

typedef struct ligne_s {
    char **str;
    char type;
} ligne_t;

void create_core_file(asm_t *data, char *name);
void load_file(const char *filename, node_t **list);
bool check_argument(char **buffer, int type, int b);
int binary_to_decimal(char *bin);
long long int little_to_big_endian(long long int x);
ligne_t *get_ligne_by_type(node_t **node, char type);
void load_comment(node_t **node, asm_t *data);
void write_in_file(asm_t *data);
void print_buffer(node_t **list);
void load_name(node_t **node, asm_t *data);
void help(void);

#endif
