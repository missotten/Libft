/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:39:09 by smissott          #+#    #+#             */
/*   Updated: 2021/11/17 10:54:08 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx1;
	size_t	idx2;

	idx1 = 0;
	idx2 = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[idx1] && idx1 < len)
	{
		if (ft_strncmp(haystack + idx1, needle, ft_strlen(needle)) == 0
			&& ft_strlen(needle) + idx1 <= len)
			return ((char *)&haystack[idx1]);
		idx1++;
	}
	return (NULL);
}
