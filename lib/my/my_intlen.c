/*
** EPITECH PROJECT, 2019
** my_intlen.c
** File description:
** int len
*/

#include "../../include/my.h"

int my_intlen(int nb)
{
    int c = 1;
    int inb = nb;

    while (nb != 1) {
        inb = nb;
        inb = inb / my_compute_power_it(10, c);
        if (inb == 1)
            nb = 1;
        if (inb == 0) {
            nb = 1;
            c -= 1;
        }
        c++;
    }
    return (c);
}
