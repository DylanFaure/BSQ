/*
** EPITECH PROJECT, 2019
** my_put_tab.c
** File description:
** put last tab for bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int my_put_tab(char *buf, int **tab, int nbl, int nbc)
{
    char **lasttab;

    tab = final_tab_int(tab, nbl, nbc);
    lasttab = final_tab_char(buf, tab, nbl, nbc);
    for (int dl = 0; dl != nbl; dl++) {
        for (int dh = 0; dh != nbc; dh++)
            my_putchar(lasttab[dl][dh]);
        my_putchar('\n');
    }
}
