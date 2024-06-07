#include <unistd.h>

void rotone(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                {
                        if (str[i] == 'z')
                                str[i] = 'a';
                        else if (str[i] == 'Z')
                                str[i] = 'A';
                        else
                                str[i] += 1;
                }
                write(1, &str[i],1);
                i++;
        }
}

int main(int argc, char *argv[])
{
        char *str;
        if (argc == 2)
        {
                str = argv[1];
                rotone(str);
        }
        write(1, "\n", 1);
        return (0);
}
