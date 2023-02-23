int ft_strlen(char *str)
{
    int len;

    while (str[len++]);
    return (len - 1);
}