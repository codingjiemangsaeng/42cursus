/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon < jihyjeon@student.42seoul.kr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:18 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/11/07 22:28:45 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ch_sep(char sc, char c)
{
	if (c == sc)
		return (1);
	return (0);
}

size_t	s_cnt(const char *str, char chr)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (ch_sep(str[i], chr) && !(ch_sep(str[i + 1], chr)))
			j++;
		i++;
	}
	return (j);
}

size_t	s_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ch_sep(str[i], c))
			return (i);
		i++;
	}
	return (i);
}

char	*c_arr(const char *str, char c)
{
	size_t	i;
	size_t	len;
	char	*new;

	len = s_len(str, c);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	i = 0;
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	nos;

	nos = s_cnt(s, c);
	arr = (char **)malloc(sizeof(char *) * (nos + 1));
	if (!(arr))
		return (0);
	i = 0;
	while (*s != 0)
	{
		while (*s != 0 && ch_sep(*s, c))
			s++;
		if (*s != 0)
		{
			arr[i] = c_arr(s, c);
			i++;
		}
		while (*s != 0 && !(ch_sep(*s, c)))
			s++;
	}
	arr[i] = 0;
	return (arr);
}
