/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:35:29 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/24 18:11:17 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		s_l;
	size_t		len;
	char		*tmp;

	tmp = (char*)s;
	s_l = 0;
	len = ft_strlen(s);
	if (c == 0)
		return (&tmp[len]);
	while (s[s_l] != '\0')
	{
		if (s[s_l] == (unsigned char)c)
			return (&tmp[s_l]);
		s_l++;
	}
	return (0);
}
