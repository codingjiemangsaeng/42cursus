/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihyjeon <jihyjeon@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:21 by jihyjeon          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:07 by jihyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_base(long long num, char *arr)
{
	if (num / 10 != 0)
		ft_itoa_base(num / 10, arr - 1);
	*arr = num % 10 + '0';
}

void	i_len(long long num, int *cnt)
{
	if (num < 0)
	{
		num *= -1;
		(*cnt)++;
	}
	if (num / 10 != 0)
	{
		(*cnt)++;
		i_len (num / 10, cnt);
	}
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		cnt;

	cnt = 1;
	i_len(n, &cnt);
	arr = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!arr)
		return (0);
	if (n < 0)
	{
		*arr = '-';
		n *= -1;
	}
	ft_itoa_base(n, arr + cnt - 1);
	*(arr + cnt) = 0;
	return (arr);
}