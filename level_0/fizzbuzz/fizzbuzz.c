#include <unistd.h>
#include <stdio.h>

void	write_the_whole_num(int  num)
{
	char c;

	if (num > 9)
	{
		write_the_whole_num(num/10);
		write_the_whole_num(num%10);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15  == 0)
                        write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			write_the_whole_num(i);	
			write(1, "\n", 1);
		}
		i++;
	}
}
