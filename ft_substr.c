/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:24:07 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/19 14:09:32 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	l;
	char			*dest;
	size_t			ltot;

	l = 0;
	while (s[l])
		l++;
	if (l < start)
		return (ft_strdup(""));
	ltot = start;
	while (s[ltot] && ltot < (len + start))
		ltot++;
	dest = malloc(sizeof(char) * (ltot - start + 1));
	if (!dest)
		return (NULL);
	l = 0;
	while (start < ltot)
		dest[l++] = s[start++];
	dest[l] = '\0';
	return (dest);
}
