/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:30:37 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/25 12:00:04 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;

	i = 0;
	len_s2 = ft_strlen(s2);
	while (s1[i] != '\0' && i < size)
		i++;
	j = 0;
	while (s2[j] != '\0' && (i + j + 1) < size)
	{
		s1[i + j] = s2[j];
		j++;
	}
	if (i < size)
		s1[i + j] = '\0';
	return (i + len_s2);
}
