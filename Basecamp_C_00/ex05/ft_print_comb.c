/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 07:37:42 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/21 17:55:23 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separator(char cen)
{
	if (cen < 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	cen;
	int	dez;
	int	uni;

	cen = 48;
	while (cen <= 55)
	{
		dez = cen + 1;
		while (dez <= 56 && dez > cen)
		{
			uni = dez + 1;
			while (uni <= 57 && uni > dez)
			{
				ft_putchar(cen);
				ft_putchar(dez);
				ft_putchar(uni);
				ft_separator(cen);
				uni++;
			}
			dez++;
		}
		cen++;
	}
}
