/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:57:56 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/21 20:43:40 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	not_printable(char c)
{
	return (c < 32);
}

char	int_to_hexa(int c)
{
	if (c <= 9)
		return (c + '0');
	return (c - 10 + 'a');
}

void	ft_print_mem(long mem)
{
	char	r[17];
	int		i;
	int		j;

	i = 0;
	while (i < 17)
		r[i++] = 0;
	i = 0;
	while (mem)
	{
		r[i++] = int_to_hexa(mem % 16);
		mem /= 16;
	}
	j = i;
	while (j < 16)
	{
		ft_putchar('0');
		j++;
	}
	i--;
	while (i >= 0)
		ft_putchar(r[i--]);
	ft_putchar(':');
	ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	long			mem_long;
	long			*addr_long;
	char			*addr_char;
	unsigned int	i;

	addr_long = (long *)addr;
	addr_char = (char *)addr;
	mem_long = (long)addr_long;
	ft_print_mem(mem_long);
	i = 0;
	while (i < size)
	{
		ft_putchar((mem_char[i] / 16) + '0');
		ft_putchar(int_to_hexa(mem_char[i] % 16));
		ft_putchar(' ');
	}
	i = 0;
	while (i < size)
	{
		if (addr[i++] < 32)
			ft_putchar('.');
		else
			ft_putchar(addr[i++]);
	}
	return (addr);
}
