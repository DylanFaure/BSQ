/*
** EPITECH PROJECT, 2019
** fin_tab.c
** File description:
** finish tab int
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

char **last_tab1(char **lasttab, int **tab, int nbl, int nbc)
{
    for (int dl = 0; dl != nbl; dl++) {
        for (int dh = 0; dh != nbc; dh++) {
            if (tab[dl][dh] == 0)
                lasttab[dl][dh] = 'o';
            else
                lasttab[dl][dh] = '.';
        }
    }
    return (lasttab);
}

char **last_tab2(char **lasttab, int bignb, int bigdl, int bigdh)
{
    for (int c1 = 0; c1 != bignb; c1++) {
        for (int c2 = 0; c2 != bignb; c2++)
            lasttab[bigdl - c1][bigdh - c2] = 'x';
    }
    return (lasttab);
}

char **final_tab_char(char *buf, int **tab, int nbl, int nbc)
{
    int bignb = 0;
    int bigdl;
    int bigdh;
    char **lasttab = malloc(sizeof(char *) * nbl);

    for (int h = 0; h != nbl; h++)
        lasttab[h] = malloc(sizeof(char) * nbc);
    for (int dl = 0; dl != nbl; dl++) {
        for (int dh = 0; dh != nbc; dh++) {
            if (tab[dl][dh] > bignb) {
                bignb = tab[dl][dh];
                bigdl = dl;
                bigdh = dh;
            }
        }
    }
    lasttab = last_tab1(lasttab, tab, nbc, nbl);
    lasttab = last_tab2(lasttab, bignb, bigdl, bigdh);
    return (lasttab);
}
