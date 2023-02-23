#include <limits.h>

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

int is_sign(char c)
{
    return ((c == '+') || (c == '-'));
}

int is_num(char c)
{
    return ((c >= '0') && (c <= '9'));
}

int is_numeric(char c)
{
    return (is_num(c)|| is_sign(c));
}

int    convertInBase(int x, char *base, int b, int e)
{
    if (!x) return 0;
    return convertInBase(x/b, base, b, e*10) + (base[(x % b)]-'0')*e;
//    return convertInBase(x/b, base, b, e*10) + (x % b)*e;
}

int ft_atoi(char *str)
{
    int num;

    num = 0;
    while (is_num(*str))
    {
        num = num * 10;
        num = num + (*str)-'0';
        str++;
    }
    return num;
}

int ft_atoi_b(char *str, char *base, int b)
{
    int sign;
    int num;

    while(!is_numeric(*(str++)));
    str--;
    sign = 1;
    while (is_sign(*str))
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    num = ft_atoi(str);
    return convertInBase(num, base, b, 1) * sign;
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i++]);
    return --i;
}

int ft_atoi_base(char *str, char *base)
{
    int b;

    b = ft_strlen(base);
    if (!valid_base(base, b))
        return 0;
    return ft_atoi_b(str, base, b);
}