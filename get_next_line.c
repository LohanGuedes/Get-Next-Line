#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char *work;
	char *result;

	if (BUFFER_SIZE < 1 || fd < 0)
			return (NULL);

	work = read_fl(fd, work);
	/* printf("GNL - Work b4: %s\n", work); */

	result = ft_substr(work, 0, (strfnl(work)));
	/* printf("GNL - Result: %s\n", result); */

	work = strcfln(work);
	/* printf("GNL - Work after: %s\n", work); */

	return (result);
}

char *read_fl(int fd, char *work)
{
	char *buffer;
	int rbamount;

	rbamount = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buffer)
		return NULL;
	while (!ft_strchr(work, '\n') && rbamount != 0)
	{

		rbamount = read(fd, buffer, BUFFER_SIZE);
		if(rbamount == -1)
		{
			free(buffer);
			return NULL;
		}
		buffer[rbamount] = '\0';
		work = ft_strjoin(work, buffer);
	}
	free(buffer);
	return (work);
}

size_t strfnl(char *s)
{
	int offset;

	offset = 0;
	while (s[offset++])
		if(s[offset] == '\n')
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
