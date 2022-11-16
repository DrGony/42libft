#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	char	*dest;
	int		i;

	dest = ft_strdup(s);
	if (!dest || !s)
		return (NULL);
	i = -1;
	while (dest[++i])
		dest = f(i, dest[i]);
	return (dest);
}
