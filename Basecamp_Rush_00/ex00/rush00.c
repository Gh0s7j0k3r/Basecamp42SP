/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relopes <relopes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:27:17 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/10 20:46:35 by relopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ini_end_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	mid_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			if (j == 1 || j == y)
			{
				ini_end_line(x);
				ft_putchar('\n');
			}
			else
			{
				mid_line(x);
				ft_putchar('\n');
			}
			j++;
		}
	}
}
