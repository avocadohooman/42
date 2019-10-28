/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:31:21 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/28 18:35:06 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		h_l;
	int		n_l;
	size_t	i;

	i = 0;
	h_l = 0;
	if (!*needle)
		return ((char *)haystack);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < n-- && haystack[h_l] != '\0')
	{
		n_l = 0;
		while (haystack[h_l + n_l] == needle[n_l] && i < n - 1)
		{
			n_l++;
			if (needle[n_l] == '\0')
				return ((char *)&haystack[h_l]);
		}
		h_l++;
		i++;
	}
	return (0);
}
