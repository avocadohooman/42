/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 08:50:28 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 18:45:30 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_arg(int argc, char **argv, int *order)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[order[i]][j] != '\0')
		{
			ft_putchar(argv[order[i]][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int order[argc];
	int i;
	int j;
	int tmp;

	i = 0;
	while (++i < argc)
		order[i] = i;
	i = 0;
	while (++i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[order[i]], argv[order[j]]) > 0)
			{
				tmp = order[i];
				order[i] = order[j];
				order[j] = tmp;
			}
			j++;
		}
	}
	ft_print_arg(argc, argv, order);
	return (0);
}
