#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int print_argv(char *arg)
{
    int i;

    i = 0;
    while(arg)
        ft_putchar(arg[i++]);
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
        print_argv(argv[i++]);
}