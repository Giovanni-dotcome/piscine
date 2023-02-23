#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_itoa(char *str, int num, int base, char *base_code)
{
    int i;

    i = 0;
    while (num)
    {
        str[i++] = base_code[(num % base)];
        num /= base;
    }

    return i;
}

int uns_ft_itoa(char *str, unsigned int num, int base, char *base_code)
{
    int i;

    i = 0;
    while (num)
    {
        str[i++] = base_code[(num % base)];
        num /= base;
    }

    return i;
}

void    ft_rev_putstr(char *base, char *str, int len)
{
    if (!len)
        ft_putchar(base[0]);
    len--;
    while (len >= 0)
        ft_putchar(str[len--]);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i++]);
    return --i;
}

void    ft_init_buff(char *str, int len)
{
    int i;

    i = 0;
    while (i < len)
        str[i++] = 0;
}

void    ft_init_ints(int *str, int len)
{
    int i;

    i = 0;
    while (i < len)
        str[i++] = 0;
}

int valid_base(char *str, int len)
{
    int     chars [SCHAR_MAX+1];
    int     i;

    ft_init_ints(chars, SCHAR_MAX+1);
    if (len < 2)
        return 0;
    i = 0;
    while (i < len)
    {
        if (str[i] == '+' || str[i] == '-')
            return 0;
        chars[str[i++]]++;
    }
    i = 0;
    while (i < SCHAR_MAX+1)
    {
        if (chars[i] > 1)
            return 0;
        i++;
    }
    return 1;
}

void    ft_putnbr_base(int num, char *base)
{
    int             b;
    int         	sign;
    char            res[34];
    int         	i;

    b = ft_strlen(base);
    if (!valid_base(base, b))
        return ;
    ft_init_buff(res, 34);
    sign = (num < 0) ? -1 : 1;
    if (num == INT_MIN)
        i = uns_ft_itoa(res, num, b, base);
    else
        i = ft_itoa(res, abs(num), b, base);
    if (sign < 0)
        res[i++] = '-';
    ft_rev_putstr(base, res, i);
}
