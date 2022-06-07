#include "get_next_line.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return ((char *) '\0');
		s++;
	}
	return ((char *)s);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*total;
	int		i;
	int		j;

	/* if (!s1 || !s2) */
	/* 	return (NULL); */
	str1 = (char *)s1;
	i = 0;
	total = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (total == NULL)
		return (NULL);
	while (str1[i++] != '\0')
		total[i] = str1[i];
	j = 0;
	while (s2[j] != '\0')
		total[i++] = s2[j++];
	total[i] = '\0';
	return (total);
}

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
