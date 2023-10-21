/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:11 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:02 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(new))
		return (0);
	while (*s1)
	{
		*new = *s1;
		s1++;
		new++;
	}
	while (*s2)
	{
		*new = *s2;
		s2++;
		new++;
	}
	*new = '\0';
	return (new);
}
