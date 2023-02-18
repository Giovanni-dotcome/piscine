/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:20:23 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/18 16:30:15 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void	print_external_row(char *a, int x)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < x-2)
	{
		ft_putchar("B");
		i++;
	}
	if (x > 1)
		ft_putchar(a);
	ft_putchar("\n");
}

void	print_internal_row(int x)
{
	int	i;

	i = 0;
	ft_putchar("B");
	while (i < x-2)
	{
		ft_putchar(" ");
		i++;
	}
	if (x > 1)
		ft_putchar("B");
	ft_putchar("\n");
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0));
		return (-1);
	int	i;

	i = 0;
	print_external_row("A", x);
	while (i < y - 2)
	{
		print_internal_row(x);
		i++;
	}
	if (y > 1)
		print_external_row("C", x);
}
