/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:31:21 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/25 17:19:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int h_l;
	int n_l;

	h_l = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[h_l] != '\0')
	{
		n_l = 0;
		while (haystack[h_l + n_l] == needle[n_l])
		{
			n_l++;
			if (needle[n_l] == '\0')
				return ((char*)&haystack[h_l]);
		}
		h_l++;
	}
	return (0);
}
