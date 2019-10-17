/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:08:28 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 18:15:36 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, unsigned int n)
{
	unsigned int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	if (s2[0] == 0)
		return (s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[len] = s2[i];
		len++;
		i++; 
	}
	s1[len] = '\0';
	return (s1);
}
