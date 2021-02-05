/*
** EPITECH PROJECT, 2021
** putnbr
** File description:
** putnbr
*/

#include "../include/hidenp.h"
void my_putchar(char c);
int my_putnbr(int nb)
{
    int pourcent = 0;
    int temp;
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
        my_putnbr(nb);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + '0');
    }
    if(nb > 0 && nb > 9) {
        temp = (nb / 10);
        my_putnbr(temp);
        pourcent = (nb % 10);
        my_putnbr(pourcent);
    }
    return 0;
}
