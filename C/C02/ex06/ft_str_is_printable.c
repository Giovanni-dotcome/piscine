/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:31:27 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/17 11:36:42 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_printable(char c)
{
	return ((c >= 32) && (c <= 127));
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
