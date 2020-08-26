/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** put caractactère
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
