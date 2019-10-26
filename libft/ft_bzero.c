/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:05:40 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 18:17:00 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char*)b;
	i = 0;
	if (len == 0)
		return (0);
	while (i < len)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
