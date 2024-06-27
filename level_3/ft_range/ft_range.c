#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int difference;
	int *array;
	int num;
	int i;
	int j = 0;

	i = 0;
	num = start;
	if (start < 0)
		start *= -1;
	difference = start - end + 1;
	//printf("La diferencia es %d\n", difference);
	if (difference <= 0)
		return (NULL);
	printf("EL start es %d y el end %d\n", start, end);
	array = malloc(difference * sizeof(int));
	if (array == NULL)
		return (NULL);

	printf("dnvvfxlv\n");
	printf("La diferencia es %d\n", difference);
	while (i < difference)
	{
		printf("El numero es %d\n", num);
		array[i] = num; 
		i++;
		num++;
	}

	while (j < (difference))
	{
		printf("%d\n", array[j]);
		j++;
	}
	return (array);
}

int main()
{
	int *array;
	int i;
	int a = 1;
	int b = 3;

	array = ft_range(a, b);
	i = 0;
	while (i < (a - b + 1))
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);

}
