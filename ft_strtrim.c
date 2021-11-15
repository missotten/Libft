/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:52:41 by smissott          #+#    #+#             */
/*   Updated: 2021/11/15 15:03:01 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i_start;
	size_t	j_end;

	if (!s1 || !set)
		return (0);
	i_start = 0;
	j_end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i_start]) != NULL)
		i_start++;
	while (ft_strchr(set, s1[j_end]) != NULL)
		j_end--;
	return (ft_substr(s1, i_start, (j_end - i_start) + 1));
}
