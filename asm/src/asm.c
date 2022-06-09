/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** asm.c
*/

#include "asm.h"
#include "cly_linked_list.h"

bool check_command(node_t **list)
{
    node_t *loop_node = *list;
    ligne_t *buffer;
    int i = 0;
    while (loop_node->next != NULL) {
        buffer = loop_node->value;
        if (buffer->type != 'h' && buffer->type != 'c' && \
        buffer->type != 'n' && buffer->type != -1 && \
        check_argument(buffer->str, buffer->type, i + 1)) {
            return true;
        }
        i++;
        loop_node = loop_node->next;
    }
    return false;
}


bool is_register(char *str)
{
    for (int i = 0; i < cly_strlen(str); i++) {
        if (str[i] == 'r') {
            return true;
        }
    }
    return false;
}

bool is_direct(char *str)
{
    for (int i = 0; i < cly_strlen(str); i++) {
        if (str[i] == '%') {
            return true;
        }
    }
    return true;
}

bool is_indirect(char *str)
{
    for (int i = 0; i < cly_strlen(str); i++) {
        if (str[i] == '%' || str[i] == 'r') {
            return false;
        }
    }
    return true;
}

void analyze(node_t **list, asm_t *data)
{
    node_t *loop_node = *list;
    int nb_args = 0;
    ligne_t *buffer;
    while (loop_node != NULL) {
        buffer = loop_node->value;
        if (buffer->type != 'h' && buffer->type != 'c' && buffer->type != 'n' && buffer->type != -1) {
            data->byte_size += 4;
            nb_args = op_tab[(int)buffer->type].nbr_args;
            for (int i = 1; i <= nb_args; i++) {
                if (is_direct(buffer->str[i])) {
                    data->byte_size += 4;
                } else {
                    data->byte_size += 1;
                }
            }
        }
        loop_node = loop_node->next;
    }
}

int compilation(char *filename)
{
    asm_t *data = malloc(sizeof(asm_t));
    node_t *buffer = NULL;
    node_t **list = &buffer;
    load_file(filename, list);
    load_name(list, data);
    load_comment(list, data);
    if (check_command(list))
        return -1;
    create_core_file(data, filename);
    analyze(list, data);
    write_in_file(data);
    return 0;
}

int test_arg(char **av, int ac)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    } else {
        cly_write(1, "compilation...\n");
        if (compilation(av[1]) == -1) {
            cly_write(1, "Failed to compile\n");
            return 84;
        }
        return 0;
    }
}

int main(int ac, char **av)
{
    if (ac == 2) {
        return test_arg(av, ac);
    } else {
        return 1;
    }
}
