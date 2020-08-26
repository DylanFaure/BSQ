/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** returns a number sent to the function as a string
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int signe = 0;
    int modsigne = 0;
    int c = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            signe = signe + 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        c = c * 10 + (str[i] - 48);
        i++;
    }
    modsigne = signe % 2;
    if (modsigne == 1)
        c = c * -1;
    if (c <= -2147483648 || c >= 2147483647)
        return (0);
    return (c);
}
