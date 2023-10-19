/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:51:32 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/11 13:51:34 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*hays;
	char	*uphere;

	hays = (char *)haystack;
	uphere = hays + len - ft_strlen(needle);
	if (needle[0] == '\0')
		return (hays);
	while (*hays && hays <= uphere)
	{
		i = 0;
		while (*(hays + i) == *(needle + i))
		{
			i++;
			if (*(needle + i) == '\0')
				return (hays);
		}
		hays++;
	}
	return (0);
}
