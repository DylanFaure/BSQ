/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

void bsq(char *buf, int size, int nbl)
{
    int **tab = malloc(sizeof(int *) * nbl);
    int dec = my_intlen(nbl) + 1;
    int nbc = 0;

    for (int i = dec; buf[i] != '\n'; i++)
        nbc++;
    for (int h = 0; h != nbl; h++)
        tab[h] = malloc(sizeof(int) * nbc);
    for (int dl = 0; dl != nbl; dl++) {
        for (int dh = 0; dh != nbc; dh++){
            if (buf[dec] == '.')
                tab[dl][dh] = 1;
            else if (buf[dec] == 'o')
                tab[dl][dh] = 0;
            dec++;
        }
        dec++;
    }
    my_put_tab(buf, tab, nbl, nbc);
}
    
int calc_nbl(char *buf, int size)
{
    int nbl = my_getnbr(buf);

    return (nbl);
}

int main(int ac, char **av)
{
    int size = calc_size(av[1]);
    char *buf = malloc(sizeof(char) * size);
    int fd = open(av[1], O_RDONLY);
    int nbl;

    if (read(fd, buf, size) == -1 || ac != 2 || buf == NULL || size < 4)
        return (84);
    nbl = calc_nbl(buf, size);
    if (nbl == 0)
        return (84);
    bsq(buf, size, nbl);
    close(fd);
    return (0);
}
