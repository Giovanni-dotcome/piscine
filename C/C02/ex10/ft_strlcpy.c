/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:44:09 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/21 22:05:10 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	j;

	i = 0;
	while (src[i] && i < size)
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
