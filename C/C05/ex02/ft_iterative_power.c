int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    if (power < 0)
        return 0;

    if (!nb)
        return 1;

    while (power)
        res *= nb;
}