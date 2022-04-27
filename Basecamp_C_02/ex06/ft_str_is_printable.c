/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:30:57 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/22 08:20:33 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 32 || c > 126)
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
