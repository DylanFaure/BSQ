/*
** EPITECH PROJECT, 2019
** calc_size.c
** File description:
** calc size
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int calc_size(char const *filepath)
{
    struct stat file;
    int size;

    stat(filepath, &file);
    size = file.st_size;
    return (size);
}
