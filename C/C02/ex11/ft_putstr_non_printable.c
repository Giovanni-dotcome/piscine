/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:00:04 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 14:08:49 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_not_printable(char c)
{
	return (c != 0 && c < 32);
}

char	to_hexa(int n)
{
	if (n <= 9)
		return ('0' + n);
	return ('a' + (n - 10));
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_not_printable(str[i]))
		{
			ft_putchar(92);
			ft_putchar('0' + (str[i] / 16));
			ft_putchar(to_hexa(str[i] % 16));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
