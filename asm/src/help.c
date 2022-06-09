/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** help.c
*/

#include "asm.h"

void help(void)
{
    cly_write(1, "USAGE\n");
    cly_write(1, "./asm file_name[.s]\n");
    cly_write(1, "DESCRIPTION\n");
    cly_write(1, "file_name file in assembly language to ");
    cly_write(1, "be converted into file_name.cor, an\n");
    cly_write(1, "executable in the Virtual Machine.");
}
