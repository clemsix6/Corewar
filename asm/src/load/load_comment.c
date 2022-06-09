/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** load_comment.c
*/

#include "asm.h"

void load_comment(node_t **node, asm_t *data)
{
    ligne_t *comment = get_ligne_by_type(node, 'c');
    int c = 0;
    for (int i = 0; i < 2048; i++) {
        data->comment[i] = 0;
    }
    for (int a = 1; comment->str[a] != NULL; a++) {
        for (int i = 0;  comment->str[a][i] != '\0'; i++) {
            if (comment->str[a][i] != '"') {
                data->comment[c] = comment->str[a][i];
                c++;
            }
        }
        data->comment[c] = ' ';
        c++;
    }
}
