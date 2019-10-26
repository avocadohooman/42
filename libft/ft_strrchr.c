/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:36:55 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/26 15:27:10 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		len;
	char	cc;

	ret = (char *)s;
	len = ft_strlen(s);
	cc = (char)c;
	if (!s)
		return (NULL);
	if (cc == '\0')
		return ((&ret[len]));
	while (ret[len] != cc && len >= 0)
		len--;
	if (ret[len] == cc)
		return (&ret[len]);
	return (NULL);
}
