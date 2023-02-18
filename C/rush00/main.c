/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:19:15 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/18 17:24:07 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, int y);

int		ft_atoi(char *ch);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc > 2)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		rush(x, y);
		return (0);
	}
	else
		return (-1);
}
