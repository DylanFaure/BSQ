/*
** EPITECH PROJECT, 2019
** final_tab_int.c
** File description:
** replace tab for BSQ (reccursive)
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"

int **final_tab_int(int **tab, int nbl, int nbc)
{
    int ic = 0;

    for (int cl = 1; cl != nbl; cl++) {
        for (int ch = 1; ch != nbc; ch++) {
            if (tab[cl - 1][ch] >= tab[cl][ch] &&
                tab[cl][ch - 1] >= tab[cl][ch] &&
                tab[cl - 1][ch - 1] >= tab[cl][ch] && tab[cl][ch] != 0) {
                tab[cl][ch] += 1;
                ic++;
            }
        }
    }
    if (ic > 0)
        final_tab_int(tab, nbl, nbc);
    return (tab);
}
