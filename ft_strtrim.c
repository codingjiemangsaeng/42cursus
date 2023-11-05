/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon < jihyjeon@student.42seoul.kr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:15 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/11/05 22:26:27 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t_str;
	char	*tmp;

	tmp = (char *)s1;
	while (ft_strchr(set, *s1) != 0)
		s1++;
	
	t_str = (char *)malloc(sizeof(char) * ((size_t)(tmp - s1) + 1));
	ft_strlcpy(t_str, s1, tmp - s1 + 1);
	return (t_str);
}
