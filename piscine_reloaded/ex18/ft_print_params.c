/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:20:47 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/15 15:38:58 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int pos;
	int let;

	if (argc)
	{
		pos = 1;
		while (argv[pos] != '\0')
		{
			let = 0;
			while (argv[pos][let] != '\0')
			{
				ft_putchar(argv[pos][let]);
				let++;
			}
			ft_putchar('\n');
			pos++;
		}
	}
	else
		return (0);
}
