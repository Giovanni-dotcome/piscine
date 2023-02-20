/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:32:34 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 14:21:24 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_lower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	is_alpha(char c)
{
	return (is_lower(c) || is_upper(c));
}

int	is_num(char c)
{
	return ((c >= '0') && (c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start_word;

	i = 0;
	start_word = 1;
	while (str[i])
	{
		if (start_word)
		{
			start_word = 0;
			if (is_lower(str[i]))
				str[i] = str[i] - 32;
		}
		else if (is_upper(str[i]))
			str[i] = str[i] + 32;
		if (!is_alpha(str[i]) && !is_num(str[i]))
			start_word = 1;
		i++;
	}
	return (str);
}
