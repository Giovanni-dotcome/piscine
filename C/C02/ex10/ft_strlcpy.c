/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:44:09 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 09:59:20 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i-1] = 0;
	j = i;
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	return (j);
}
