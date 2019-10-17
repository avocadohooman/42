/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:30:37 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/17 08:25:08 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *s1, const char *s2, unsigned int size)
{
	int i;
	int len;
	int c;

	len = ft_strlen(s1);
	
}


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t i;
	size_t j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char*)src);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize < dstlen + 1)
		return (srclen + dstsize);
	while (i < (dstsize - dstlen - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);