#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char c;

	i = 0;
	while (i <= 7)
	{
		c = (octet >> i & 1) + '0'; 
		write(1, &c, 1);
		i++;
	}
}

int main()
{
	print_bits('2');
}
