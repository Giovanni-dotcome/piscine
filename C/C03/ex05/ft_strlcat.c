/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:02:41 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/21 21:55:58 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i++]) ;
	return (i - 1);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int	d_len;
	int	s_len;
	int	offset;
	int	src_ind;
	int i = 0; //size - d_len - 1;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	src_ind = 0;
	while (src[src_ind] && i < size - d_len - 1)
		dst[offset++] = src[src_ind++];
	dst[offset] = 0;
	return (d_len + s_len);
}
