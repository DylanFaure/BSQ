/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** compte le nombre de caractère d'une chaîne de caractère
*/

int my_strlen(char const *str)
{
    int a = 0;

    for (int n = 0; str[n] != '\0'; n++)
        a = a + 1;
    return (a);
}
