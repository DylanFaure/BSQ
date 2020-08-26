/*
** EPITECH PROJECT, 2019
** my_compute_power_it.c
** File description:
** calcul la puissance d'un nombre
*/

int my_compute_power_it(int nb, int p)
{
    int c = 1;
    long nb2 = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    else {
        for (; c != p; c++)
            nb2 = nb2 * nb;
        return (nb2);
    }
}
