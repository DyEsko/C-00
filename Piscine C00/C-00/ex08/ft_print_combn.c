/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfederlo <jfederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:01:25 by jfederlo          #+#    #+#             */
/*   Updated: 2026/11/10 15:02:29 by jfederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

static void	ft_print_combination(int *tab, int n)
{
	int		i;
	int		last;
	char	c;

	last = 1;
	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		if (tab[i] != 10 - n + i)
			last = 0;
		i++;
	}
	if (!last)
		write(1, ", ", 2);
}

static void	ft_generate(int *tab, int pos, int start, int n)
{
	int	i;

	if (pos == n)
	{
		ft_print_combination(tab, n);
		return ;
	}
	i = start;
	while (i <= 10 - (n - pos))
	{
		tab[pos] = i;
		ft_generate(tab, pos + 1, i + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	ft_generate(tab, 0, 0, n);
}
