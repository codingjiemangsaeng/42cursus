/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:18 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:07 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ch_sep(char sc, char c)
{
	int	i;

	i = 0;
	while (c)
	{
		if (c == sc)
			return (1);
		i++;
	}
	return (0);
}

int	s_cnt(char *str, char chr)
{
	int	i;
	int	j;

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

int	s_len(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ch_sep(str[i], c))
			return (i);
		i++;
	}
	return (i);
}

char	*c_arr(char *str, char c)
{
	int		i;
	int		len;
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
	int		i;
	int		nos;

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
