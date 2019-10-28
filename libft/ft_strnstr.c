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
	size_t		h_l;
	size_t		n_l;

	h_l = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[h_l] != '\0' && h_l < n)
	{
		if (needle[0] == haystack[h_l])
		{
			n_l = 1;
			while (haystack[h_l + n_l] == needle[n_l] && needle[n_l] != '\0'
			&& h_l + n_l < n)
				n_l++;
			if (needle[n_l] == '\0')
				return ((char*)&haystack[h_l]);
		}
		h_l++;
	}
	return (0);
}
