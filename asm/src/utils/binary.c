/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** binary.c
*/

#include "cly_string.h"

int my_pow(int nb, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++) {
        result *= nb;
    }
    return result;
}

int binary_to_decimal(char *bin)
{
    int result = 0;
    int power = cly_strlen(bin) - 1;
    for (int i = 0; bin[i] != 0; i++) {
        result += (bin[i] - 48) * my_pow(2, power);
        power--;
    }
    return result;
}
