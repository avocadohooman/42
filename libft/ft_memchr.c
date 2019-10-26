/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:44:28 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/26 14:59:11 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	s_l;
	int		len;
	char	*tmp;

	tmp = (char *)s;
	s_l = 0;
	len = ft_strlen(s);
	if (c == 0)
		return (&tmp[len]);
	while (s_l < n)
	{
		if (tmp[s_l] == c)
			return (&tmp[s_l]);
		s_l++;
	}
	return (0);
}
