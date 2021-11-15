/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:38:41 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 14:49:47 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	idx;

	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		idx = len;
		while (idx >= 0)
		{
			if (idx == 0)
				return (dest);
			idx--;
			((char *)dest)[idx] = ((const char *)src)[idx];
		}
	}
	else if (src > dest)
	{
		idx = 0;
		while (idx < len)
		{
			((char *)dest)[idx] = ((const char *)src)[idx];
			idx++;
		}
	}
	return (dest);
}
