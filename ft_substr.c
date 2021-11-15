/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:41:17 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 15:01:44 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*tmp;

	idx = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	tmp = malloc(sizeof(*s) * (len + 1));
	if (!tmp)
		return (NULL);
	while (start < ft_strlen(s) && idx < len)
	{
		tmp[idx] = s[start];
		start++;
		idx++;
	}
	tmp[idx] = 0;
	return (tmp);
}
