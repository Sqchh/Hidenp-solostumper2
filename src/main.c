/*
** EPITECH PROJECT, 2021
** main
** File description:
** main$
*/

int main(int ac, char **av)
{
    if (ac == 3)
        my_hidnep(av[1], av[2]);
    else {
        write(2, "Usage: ./hidenp needle haystack\n", 32);
        return (84);
    }
    return (0);
}
