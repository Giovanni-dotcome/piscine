/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:00:04 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 10:57:17 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	is_not_printable(char c)
{
	return (c != 0 && c < 32);
}

char	to_hexa(int n)
{
	if (n <= 9)
		return ('0'+n);
	return ('a' + (n - 10));
}

char	*non_printable_to_hexa(char c)
{
	//char	*r;
	char	r[3] = {92, ('0' + (c / 16)), to_hexa(c % 16)};

	//r[0] = 92;
	//r[1] = ;
	//r[2] = 0;
	//r[2] = ;

	return (r);	
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_not_printable(str[i]))
			write(1, non_printable_to_hexa(str[i]), 3);
		else
			write(1, &str[i], 1);
		i++;
	}
}
