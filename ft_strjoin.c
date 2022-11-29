/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:56:18 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/29 11:33:38 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (l1 + l2 +1));
	if (!dest)
		return (NULL);
	l1 = 0;
	while (s1[l1])
	{
		dest[l1] = s1[l1];
		l1++;
	}
	l2 = 0;
	while (s2[l2])
		dest[l1++] = s2[l2++];
	dest[l1] = '\0';
	return (dest);
}
