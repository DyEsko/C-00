/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfederlo <jfederlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:16:46 by jfederlo          #+#    #+#             */
/*   Updated: 2026/11/05 18:19:38 by jfederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void)
{
    char number;

    number = '0';
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}
