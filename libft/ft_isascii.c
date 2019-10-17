/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:56:47 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 16:22:03 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if ((c >= 0 && c <= 127) || (c >= 000 && c <= 077))
		return (1);
	else if (c >= 0100 && c <= 0177)
		return (1);
	else
		return (0);
}