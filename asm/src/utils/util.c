/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** util.c
*/

#include "../../include/asm.h"

long long int little_to_big_endian(long long int x)
{
    return ((x & 0x000000FF) << 24) | ((x & 0x0000FF00) << 8) |
        ((x & 0x00FF0000) >> 8) | ((x & 0xFF000000) >> 24);
}

ligne_t *get_ligne_by_type(node_t **node, char type)
{
    node_t *loop_node = *node;
    ligne_t *buffer;
    while (loop_node != NULL) {
        buffer = loop_node->value;
        if (buffer->type == type) {
            return buffer;
        }
        loop_node = loop_node->next;
    }
    return NULL;
}

void print_buffer(node_t **list)
{
    node_t *loop_node = *list;
    ligne_t *buffer;
    while (loop_node != NULL) {
        buffer = loop_node->value;
        loop_node = loop_node->next;
        for (int i = 0; buffer->str[i] != NULL; i++) {
            cly_write(1, buffer->str[i]);
            cly_write(1, " ");
        }
        printf(" type : %d\n", buffer->type);
    }
}
