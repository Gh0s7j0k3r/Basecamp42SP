/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relopes <relopes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:30:41 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/10 20:46:42 by relopes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ini_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('/');
		}
		else if (i == x)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	end_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('\\');
		}
		else if (i == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
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
			if (j == 1)
			{
				ini_line(x);
				ft_putchar('\n');
			}
			else if (j == y)
			{
				end_line(x);
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
