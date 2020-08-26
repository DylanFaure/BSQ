/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** compilation of fonction 
*/

#ifndef MY_H_
#define MY_H_

int my_put_tab(char *buf, int **tab, int nbl, int nbc);
char **final_tab_char(char *buf, int **tab, int nbl, int nbc);
int **final_tab_int(int **tab, int nbl, int nbc);
int calc_size(char const *filepath);
int my_compute_power_it(int nb, int p);
int my_intlen(int nb);
void my_putchar(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);


#endif
