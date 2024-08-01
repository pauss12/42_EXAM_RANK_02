#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *op;
	int num1;
	int num2;
	int sol;

	num1 = 0;
	num2 = 0;
	sol = 0;
	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op = argv[2];
		if (*op == '-')
			sol = num1 - num2;
		else if (*op == '*')
			sol = num1 * num2;
		else if (*op == '+')
			sol = num1 + num2;
		else if (*op == '/')
			sol = num1 / num2;
		printf("%d\n", sol);
	}
	else
		write(1, "\n", 1);
	return (0);
}
