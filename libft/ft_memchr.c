/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:44:28 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/28 10:04:29 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			s_l;
	size_t			len;
	unsigned char	*tmp;

	tmp = (unsigned char*)s;
	s_l = 0;
	len = ft_strlen(s);
	if (c == 0)
		return (&tmp[len]);
	while (s_l < n)
	{
		if (tmp[s_l] == (unsigned char)c)
			return (&tmp[s_l]);
		s_l++;
	}
	return (0);
}
