/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:18:11 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/15 15:35:56 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int number;

	number = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1)
	{
		number = number * nb;
		nb--;
	}
	return (number);
}
