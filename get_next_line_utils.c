#include "get_next_line.h"

int strfnl(char *s)
/*
** Try to find a \n inside a string, returning the place where it was found
** 0 if not found.
*/
{
	int offset;

	offset = 0;
	while (s[offset++])
		if (s[offset] == '\n')
			return offset;
	return 0;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i_start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	i_start = 0;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && i_start < len)
			substr[i_start++] = s[i];
		i++;
	}
	substr[i_start] = '\0';
	return (substr);
}
