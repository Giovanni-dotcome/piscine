/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:20:23 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/17 22:14:14 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void	print_external_row(int w)
{
	int	i;

	i = 0;
	ft_putchar("A");
	while (i < w-2)
	{
		ft_putchar("B");
		i++;
	}
	if (w > 1)
		ft_putchar("A");
	ft_putchar("\n");
}

void	print_internal_row(int w)
{
	int	i;

	i = 0;
	ft_putchar("B");
	while (i < w-2)
	{
		ft_putchar(" ");
		i++;
	}
	if (w > 1)
		ft_putchar("B");
	ft_putchar("\n");
}

void	rush(int w, int l)
{
	int	i;

	i = 0;
	print_external_row(w);
	while (i < l - 2)
	{
		print_internal_row(w);
		i++;
	}
	if (l > 1)
		print_external_row(w);
}
