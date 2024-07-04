#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	int i;
	
	i = 1;
	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			return (0);
		else
		{
			num = atoi(argv[1]);
			
			if (num == 1)
				write(1, "1", 1);

			while (++i <= num)
			{
				if (num % i == 0)
				{
					printf("%d", i);
					if (num == i)
						break ;
					printf("*");
					num = num / i;
					i = 1;
				}
			}
		}
	}
	printf("\n");
	return (0);
}
