/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:23:16 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/19 16:25:45 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < '0' || c > '9')
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
