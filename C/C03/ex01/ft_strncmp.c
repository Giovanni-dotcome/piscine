/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:14:49 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/20 16:52:38 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char*s2, unsigned int n)
{
	unsigned int	r;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	r = 0;
	while (s1[i] && s2[j] && !r && (i < n))
		r = s1[i++] - s2[j++];
	return (r);
}
