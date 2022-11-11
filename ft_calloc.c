/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:52:39 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/11 15:18:59 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	i;

	dest = malloc(size * (nmemb + 1));
	if (!dest || size == 0 || nmemb == 0)
		return (NULL);
	while (i < (nmemb + 1))
		dest[i++] = 0;
	return (dest);
}
