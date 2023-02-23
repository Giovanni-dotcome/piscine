int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i <= nb / 2)
    {
        if (!nb % i)
            return i;
        i++;
    }
    return 0;
}