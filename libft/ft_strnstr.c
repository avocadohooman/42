/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:31:21 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 14:38:26 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, unsigned int n)
{
	int				h_l;
	int				n_l;
	unsigned int	i;

	i = 0;
	h_l = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[h_l] != '\0' && i < n)
	{
		n_l = 0;
		while (haystack[h_l + n_l] == needle[n_l])
		{
			n_l++;
			if (needle[n_l] == '\0')
				return (&haystack[h_l]);
		}
		h_l++;
		i++;
	}
	return (0);
}
