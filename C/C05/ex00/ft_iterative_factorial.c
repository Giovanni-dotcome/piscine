int ft_iterative_factorial(int nb)
{
    int r;

    r = 1;
    while (nb > 2)
        r *= nb--;
    return r;
}