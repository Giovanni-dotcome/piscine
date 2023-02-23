#include <unistd.h>
#include <string.h>

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

void    sort_str(char **array, int size)
{
    char temp[30];
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    sort_str(argv+1, argc-1);
    while (i < argc)
        print_argv(argv[i++]);
}
