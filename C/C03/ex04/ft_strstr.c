/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-vito <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:03:28 by gde-vito          #+#    #+#             */
/*   Updated: 2023/02/21 10:04:59 by gde-vito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
		return (&str[i]);
	while (str[i])
	{
		j = i;
		while (str[j] == to_find[j])
			j++;
		if (!to_find[j] || !str[j])
			return (&str[i]);
		i++;
	}
	return ("NULL");
}
