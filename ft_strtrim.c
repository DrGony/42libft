/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:34:25 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/15 13:34:33 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_up(char const *s1, char const *set)
{
	int	s;
	int	l;

	l = 0;
	s = 0;
	while (s1[l] && set[s])
	{
		s = 0;
		while (set[s] && s1[l] != set[s])
			s++;
		if (set[s] == s1[l])
			l++;
	}
	return (l);
}

int	count_down(char const *s1, char const *set, int l)
{
	int	t;
	int	s;

	t = ft_strlen(s1) - 1;
	s = 0;
	while (t > l && set[s])
	{
		s = 0;
		while (set[s] && s1[t] != set[s])
			s++;
		if (set[s] == s1[t])
			t--;
	}
	return (t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		l;
	int		t;
	int		s;

	l = count_up(s1, set);
	if (s1[l] == '\0')
		return (NULL);
	t = count_down(s1, set, l);
	dest = malloc(sizeof(char) * (t - l + 2));
	if (!dest)
		return (NULL);
	s = 0;
	while (t >= l)
	{
		dest[s] = s1[l];
		l++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}
