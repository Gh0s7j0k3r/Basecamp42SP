/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:44:13 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/19 14:42:08 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
