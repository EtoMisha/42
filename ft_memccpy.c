#include <stdlib.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	char *dest;
	char *src;
	int i;

	dest = (char *)destination;
	src = (char *)source;
	i = 0;	
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
