/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:59:36 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/29 11:37:33 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	if (!s || !f)
		return (NULL);
	dest = ft_strdup(s);
	if (!dest)
		return (NULL);
	i = -1;
	while (dest[++i])
		dest[i] = (*f)(i, dest[i]);
	return (dest);
}
