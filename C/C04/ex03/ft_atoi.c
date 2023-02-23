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

int ft_atoi(char *str)
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
    num = 0;
    while (is_num(*str))
    {
        num = num * 10;
        num = num + (*str)-'0';
        str++;
    }
    num *= sign;
    return num;
}