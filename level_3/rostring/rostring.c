#include <stdio.h>
#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int more_than_word(char *str)
{
	int i = 0;
	int word_count = 0;

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			word_count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (word_count > 1);
}

int main(int argc, char *argv[])
{
	char *str;
	int i;
	int flag;
	int end_word;
	int start_word;
	int state;

	i = 0;
	state = 0;
	flag = 0;
	start_word = 0;
	end_word = 0;
	if (argc > 1)
	{
		if (argc != 2)
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			return (0);
		}
		str = argv[1];
		state = more_than_word(str);
		while (is_space(str[i]))
			i++;
		start_word = i;
		while (str[i] != '\0' && (!is_space(str[i])))
			i++;
		end_word = i;
		i++;
		while (str[i] != '\0')
		{
			if ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && flag == 0)
				flag = 1;
			else if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			{
				if (flag == 1)
					write(1, " ", 1);
				flag = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
		
		if (state == 1)
			write(1, " ", 1);
		
		while (start_word < end_word)
		{
			write(1, &str[start_word], 1);
			start_word++;
		}
	}
	write(1, "\n", 1);
	return (0);
}