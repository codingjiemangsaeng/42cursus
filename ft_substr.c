/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:06 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/19 18:43:58 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if(!(str))
		return (0);
	ft_strlcpy(str, s + (size_t)start, len + 1);
	return (str);
}