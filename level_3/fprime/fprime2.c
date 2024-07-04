#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	int i;

	if (argc == 2)
	{
		i = 1;
		if (atoi(argv[1]) < 0)
				return (0);
		num = atoi(argv[1]);
		
		if (num == 1)
			printf("1");
		while (++i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break ;
				printf("*");
				num /= i;
				i = 1;
			}
		}

	}
	printf("\n");
	return (0);
}
