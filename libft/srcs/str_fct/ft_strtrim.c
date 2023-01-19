/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vienguye <vienguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:36:03 by knerini           #+#    #+#             */
/*   Updated: 2022/11/18 14:14:11 by vienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_startisset(const char *s1, const char *set)
{
	int		i;
	int		j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			k++;
			i++;
			j = 0;
		}
		else if (s1[i] != set[j] && set[j] != '\0')
			j++;
		else
			return (k);
	}
	return (k);
}

static size_t	ft_endisset(const char *s1, const char *set)
{
	int		i;
	int		j;
	size_t	k;

	i = ft_strlen(s1) - 1;
	k = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			k++;
			j = 0;
		}
		else if (s1[i] != set[j] && set[j] != '\0')
			j++;
		else
			return (k);
	}
	return (k);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*new_str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_startisset(s1, set);
	end = ft_endisset(s1, set);
	len = ft_strlen(s1) - (start + end);
	new_str = ft_substr(s1, start, len);
	return (new_str);
}

char	*ft_minishell_strtrim(const char *s1, const char *set, size_t end_s1)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*new_str;
	char	*to_trim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	to_trim = ft_substr(s1, 0, end_s1);
	start = ft_startisset(to_trim, set);
	end = ft_endisset(to_trim, set);
	len = ft_strlen(to_trim) - (start + end);
	new_str = ft_substr(to_trim, start, len);
	free(to_trim);
	return (new_str);
}
