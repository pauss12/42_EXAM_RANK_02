
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int	num;
	int	i;

	if (src == NULL)
		return (NULL);
	num = 0;
	i = 0;
	str = NULL;
	while (src[num] != '\0')
		num++;
	str = (char *)malloc((num + 1)*sizeof(char));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
