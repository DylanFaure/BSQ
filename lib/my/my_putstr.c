/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** print textaffiche un text
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int c = 0; str[c] != '\0'; c++)
        my_putchar(str[c]);
    return (0);
}
