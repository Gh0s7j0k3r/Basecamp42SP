/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:28:28 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/19 18:29:28 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'A' || c > 'Z')
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
