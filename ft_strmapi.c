/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:59:36 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/19 09:59:38 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	dest = ft_strdup(s);
	if (!dest || !s || !f)
		return (NULL);
	i = -1;
	while (dest[++i])
		dest[i] = (*f)(i, dest[i]);
	return (dest);
}
