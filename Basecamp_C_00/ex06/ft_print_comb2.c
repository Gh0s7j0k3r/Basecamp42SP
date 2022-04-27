/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:59:13 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/21 16:40:57 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_count(int x)
{
	if (x > 9)
	{
		ft_putchar(x / 10 + '0');
		ft_putchar(x % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(x % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_count(a);
			ft_putchar(' ');
			ft_count(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
