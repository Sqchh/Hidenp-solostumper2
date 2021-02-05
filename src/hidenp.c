/*
** EPITECH PROJECT, 2021
** hidenp
** File description:
** hidenp
*/
#include <string.h>
#include <stdlib.h>

#include "../include/hidenp.h"

int my_putnbr(int nb);
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_hidnep(char *str, char *des)
{
    int i, j = 0;
    for (int i = 0; des[i] != '\0'; i++)
        if (*str == des[i])
            str++;
    if (*str == '\0')
        write(1,"1\n", 2);
    else
        write(1,"0\n", 2);
}
