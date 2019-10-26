/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 20:06:13 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/24 18:42:55 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	size_t	c;

	i = 0;
	c = 0;
	if (s1 == NULL || s1 == NULL)
		return (0);
	while (s1[i] == s2[i])
	{
		if (c == (n - 1) || s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
		c++;
	}
	if ((s1[i] == '\0' && s2[i] == '\0') || n == 0)
		return (1);
	else if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
