#include <unistd.h>
#include <stdio.h>

int	check_repeated(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == c) && (i == pos))
			return (0);
		else if ((str[i] == c) && (i != pos))
			return (1);
		i++;
	}
	return (1);
}

int	is_there_any(char *str, char caracter)
{
	int i;
       
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == caracter)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char *s1;
	char *s2;
	int  i;
	int  j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i] != '\0')
		{
			 if (check_repeated(s1, s1[i],i) == 0)
			 	write(1, &s1[i], 1);
			 i++;
		}
		while (s2[j] != '\0')
                {
                         if (is_there_any(s1, s2[j]) == 0)
                         {
				 if (check_repeated(s2, s2[j], j) == 0)
					 write(1, &s2[j], 1);
			 } 
			j++;
                }
	}
	write(1, "\n", 1);
	return (0);
}
