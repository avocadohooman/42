/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:44:28 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 13:51:50 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*tmp;

	tmp = (unsigned char*)s;
	i = 0;
	len = ft_strlen(s);
	if (c == 0)
		return ((void*)&tmp[len]);
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void*)&tmp[i]);
		i++;
	}
	return (0);
}
