#include <unistd.h>

int is_repeated(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (str[i] != '\0' && i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;	
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (is_repeated(s1, s1[i], i) == 0)
				{	
					write(1, &s1[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}

}

int main(int argc, char *argv[])
{
	char *str1;
	char *str2;
	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		inter(str1, str2);
	}
	write(1, "\n", 1);
	return (0);
}
