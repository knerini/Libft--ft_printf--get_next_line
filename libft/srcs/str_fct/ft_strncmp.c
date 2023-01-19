/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vienguye <vienguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:16:42 by knerini           #+#    #+#             */
/*   Updated: 2022/11/17 12:51:05 by vienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t				i;
	unsigned char const	*str1;
	unsigned char const	*str2;

	str1 = (unsigned char const *)s1;
	str2 = (unsigned char const *)s2;
	i = 0;
	while (str1[i] && str2 [i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1 [i] - str2[i]);
		i++;
	}
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}

int	ft_strmycmp(char const *s1, char const *s2, size_t n1, size_t n2)
{
	size_t				i;
	unsigned char const	*str1;
	unsigned char const	*str2;

	str1 = (unsigned char const *)s1;
	str2 = (unsigned char const *)s2;
	i = 0;
	if (n2 > n1)
		n1 = n2;
	while (str1[i] && str2 [i] && i < n1)
	{
		if (str1[i] != str2[i])
			return (str1 [i] - str2[i]);
		i++;
	}
	if (i < n1)
		return (str1[i] - str2[i]);
	return (0);
}
