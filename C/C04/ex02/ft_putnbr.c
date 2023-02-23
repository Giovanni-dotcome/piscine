#define MAX_INT_CHARS 12
#define INT_MIN -2147483648
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    init_empty_str(char *str, int len)
{
    int i;

    i = 0;
    while (i < len)
        str[i++] = 0;
}

void	create_str_nbr(char *str, int nbr, int *i, int *is_neg)
{
    *is_neg = 0;
    *i = 0;
    if (nbr < 0)
    {
        *is_neg = 1;
        nbr = nbr * (-1);
    }
    while (nbr)
    {
        str[(*i)++] = (nbr % 10) + '0';
        nbr /= 10;
    }
    (*i)--;
}

void    rev_print_str(char *str, int is_neg, int i)
{
    if (is_neg)
        ft_putchar('-');
    while (i >= 0)
        ft_putchar(str[i--]);
}

void    ft_putnbr(int nbr)
{
    char    str_nbr[MAX_INT_CHARS];
    int     is_neg;
    int     i;

    if (nbr == INT_MIN)
        write(1, "2147483648", 10);
    else if (!nbr)
        write(1, "0", 1);
    else
    {
        init_empty_str(str_nbr, MAX_INT_CHARS);
        create_str_nbr(str_nbr, nbr, &i, &is_neg);
        rev_print_str(str_nbr, is_neg, i);
    }
}