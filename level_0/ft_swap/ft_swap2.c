#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;
	
	aux = *b;
	*b = *a;
	*a = aux;
}

int main()
{
	int a = 2;
	int b = 3;
	printf("A: %d y B: %d\n", a, b);
	ft_swap(&a, &b);
	printf("A: %d y B: %d\n", a, b);
}
