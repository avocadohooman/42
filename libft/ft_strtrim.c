/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:38:45 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/24 18:19:51 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	while (*s && s[i] <= 32)
		i++;
	while (*s && s[len] <= 32)
		len--;
	if (len < 0)
		return ((str = ft_strnew(1)));
	if (!(str = malloc(sizeof(char) * (len - i + 2))))
		return (NULL);
	j = 0;
	while (i < len + 1)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
