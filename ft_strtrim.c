/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon < jihyjeon@student.42seoul.kr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:15 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:27 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t_str;
	char	*tmp;

	tmp = (char *)s1 + ft_strlen(s1) - 1;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (ft_strchr(set, *tmp))
		tmp--;
	t_str = (char *)malloc(sizeof(char) * ((size_t)(tmp - s1 + 2)));
	if (!t_str)
		return (0);
	ft_strlcpy(t_str, s1, tmp - s1 + 2);
	return (t_str);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*t_str;
// 	char	*tmp;

// 	while (*s1)
// 	{
// 		while (*s1 && ft_strchr(set, *s1))
// 			s1++;
// 		if (*s1)
// 			tmp = s1;
// 		while (*s1 && ft_strchr(set, *s1))
// 			s1++;
// 	}
// 	return (t_str);
// }
