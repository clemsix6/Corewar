/*
** EPITECH PROJECT, 2022
** corewar
** File description:
** swap_big_endian.c
*/

int swap_endian(int nb)
{
    int b0, b1, b2, b3;
    int res;

    b0 = (nb & 0x000000ff) << 24u;
    b1 = (nb & 0x0000ff00) << 8u;
    b2 = (nb & 0x00ff0000) >> 8u;
    b3 = (nb & 0xff000000) >> 24u;

    return res = b0 | b1 | b2 | b3;
}
