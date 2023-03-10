int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb / 2)
        if (!nb % i++)
            return 1;
    return 0;
}

int ft_find_next_prime(int nb)
{
    while (!ft_is_prime(++nb)) ;
    return nb;
}