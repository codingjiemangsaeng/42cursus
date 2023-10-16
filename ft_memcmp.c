/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:51:29 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/11 13:51:31 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = s1;
	two = s2;
	while ((*one || *two) && n--)
	{
		if (*one != *two)
			return (*(unsigned char *)one - *(unsigned char *)two);
		one++;
		two++;
	}
	return (*(unsigned char *)(one - 1) - *(unsigned char *)(two - 1));
}
