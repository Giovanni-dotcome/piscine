/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:20:23 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/17 19:45:36 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void	rush(int w, int l)
{
	int	i;

	i = 0;
	print_external_row(w);
	while (i < l - 2)
		print_internal_row(w);
	print_external_row(w);
}
