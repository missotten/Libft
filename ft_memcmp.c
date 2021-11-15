/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:12:24 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 14:57:07 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)str1)[idx] == ((unsigned char *)str2)[idx]
					&& (idx + 1) < n)
		idx++;
	return (((unsigned char *)str1)[idx] - ((unsigned char *)str2)[idx]);
}
