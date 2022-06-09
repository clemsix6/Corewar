/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** load_file.c
*/

#include "asm.h"
#include "cly_linked_list.h"
#include "cly_string.h"
#include <string.h>

int set_type(char **str)
{
    if (str[0][0] == '#')
        return 'h';
    if (cly_strcmp(str[0], ".name") == 0)
        return 'n';
    if (cly_strcmp(str[0], ".comment") == 0)
        return 'c';
    for (int i = 0; op_tab[i].mnemonique != 0; i++) {
        if (cly_strcmp(op_tab[i].mnemonique, str[0]) == 0) {
            return i;
        }
    }
    return -1;
}

ligne_t *create_line(char *str)
{
    ligne_t *ligne = malloc(sizeof(ligne_t));
    ligne->str = cly_to_wordarray(str, ' ');
    ligne->type = set_type(ligne->str);
    return ligne;
}

void load_file(const char *filename, node_t **list)
{
    size_t len = 0;
    char *line_buffer = NULL;
    FILE *fd = fopen(filename, "r");
    ligne_t *line = NULL;
    while (getline(&line_buffer, &len, fd) != -1) {
        //printf("%s\n", line_buffer);
        line = create_line(cly_strdup(line_buffer));
        cly_node_push_back(list, (ligne_t *)line);
    }
    print_buffer(list);
}
