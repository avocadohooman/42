/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:06:34 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/26 15:35:16 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*cpy_src;
	unsigned char	*cpy_dst;

	cpy_dst = (unsigned char *)dst;
	cpy_src = (unsigned char *)src;
	if (n == 0)
		return (dst);
	if (!cpy_dst && !cpy_src)
		return (NULL);
	if (cpy_src < cpy_dst)
		while (n > 0)
		{
			n--;
			cpy_dst[n] = cpy_src[n];
		}
	else
		while (n-- > 0)
		{
			*(cpy_dst++) = *(cpy_src++);
		}
	return (dst);
}
