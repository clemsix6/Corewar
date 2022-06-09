/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** help.c
*/

#include "../include/corewar.h"

void help(void)
{
    cly_write(1, "USAGE\n./corewar [-dump nbr_cycle] [[-n prog_number] [-a\
    load_address] prog_name] ...\n");
    cly_write(1, "DESCRIPTION\n-dump nbr_cycle dumps the memory after the");
    cly_write(1, "nbr_cycle execution (if the ");
    cly_write(1, "round isn’t already over) with the ");
    cly_write(1, "following format: 32 bytes/line ");
    cly_write(1, "in hexadecimal (A0BCDEFE1DD3...)");
    cly_write(1, "-n prog_number sets the next program’s number.");
    cly_write(1, " By default, the first free number in the parameter order\n");
    cly_write(1, "-a load_address sets the next program’s loading address.");
    cly_write(1, " When no address is specified, optimize the addresses so ");
    cly_write(1, "that the processes are as far");
    cly_write(1, " away from each other as possible. ");
    cly_write(1, "The addresses are MEM_SIZE modulo.\n");
}
