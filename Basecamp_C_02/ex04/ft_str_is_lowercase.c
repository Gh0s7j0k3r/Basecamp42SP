/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:14:18 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/19 18:27:07 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'a' || c > 'z')
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
