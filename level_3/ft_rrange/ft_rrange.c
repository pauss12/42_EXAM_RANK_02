#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int i;
	int count;
	int num;
	int *array;

	i = 0;
	num = 0;
	count = end;
	while (count >= start)
	{	
		num++;
		count--;
	}
	array = (int *)malloc(num * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < num && end >= start)
        {
                array[i] = end;
                i++;
		end = end - 1;
        }
	return (array);
}

int main()
{
	int start;
	int end;
	int i;
	int count;
	int *array;
	int num;

	i = 0;
	num = 0;
	start = 0;
	end = -3;
	count = end;
	while (count >= start)
	{	
		num++;
		count--;

	}
	array = ft_rrange(start, end);
	i = 0;
	while (i < num)
	{
		printf("[%d]\n", array[i]);
		i++;
	}
	return (0);
}
