/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <gde-vito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:20:23 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/18 17:27:53 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char *c);

void	ft_putchars(char *c, int n);

int	is_numeric(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int	ft_atoi(char *str)
{
	int	i;
	int	e;
	int	r;

	e = 0;
	r = 0;
	i = 0;
	while (is_numeric(str[e]))
		e++;
	while (i < e)
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	return (r);
}

void	print_external_row(char *a, int x)
{
	int	i;

	i = 0;
	ft_putchar(a);
	while (i < x - 2)
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
	while (i < x - 2)
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
	int	i;

	if ((x <= 0) || (y <= 0))
	{
		ft_putchars("inserire un intero positivo.\n", 29);
		return ;
	}
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
