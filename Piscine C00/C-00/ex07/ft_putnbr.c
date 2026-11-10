/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfederlo <jfederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:54:56 by jfederlo          #+#    #+#             */
/*   Updated: 2026/11/10 14:56:30 by jfederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putnbr_recursive(unsigned int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr_recursive(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_recursive(0u - (unsigned int)nb);
	}
	else
		ft_putnbr_recursive((unsigned int)nb);
}