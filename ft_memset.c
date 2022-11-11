/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:48:56 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/11 11:20:35 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	j;
	unsigned char	*s1;

	j = -1;
	s1 = (unsigned char *)s;
	while (++j < n)
		s1[j] = c;
	return (s1);
}
