/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoises <mmoises@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:32:12 by mmoises           #+#    #+#             */
/*   Updated: 2022/04/21 06:06:11 by mmoises          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		if (s1[c] == s2[c])
			c++;
		else
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	}
	return (0);
}
