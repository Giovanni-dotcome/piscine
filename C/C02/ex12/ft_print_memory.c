/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:57:56 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 13:18:12 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	not_printable(char c)
{
	return (c < 32);
}

char	int_to_hexa(int c)
{
	if (c <= 9)
		return c + '0';	
	return c + 'a';
}

void	ft_print_hexa(int c)
{
	char	*r;
	int		i;

	while(i < 3)
	{
		r[i] = 0;
		i++;
	}

	while (c)
	{
		r[i] = int_to_hexa(c%16);
		c /= 16;	
	}

	while (i >= 0)
	{
		write(1, &r[i], 1);
		i--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;

	i = (int) addr;

	write(1, &i, 1);
	write(1, " ", 1);

	i = 0;
	while (i < size)
	{
		ft_print_hexa(((int)addr[i]));		
		write(1, " ", 1);
		i++;
	}

	i = 0;
	while (i < size)
	{
		if (not_printable(addr[i]))
			write(1, ".", 1);
		else
			write(1, &addr[i], 1);
		i++;
	}
	
	return addr;
}
