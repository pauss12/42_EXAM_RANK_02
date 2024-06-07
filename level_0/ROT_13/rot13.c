#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int numero_letras(char c)
{
    int i;
    char abecedario[27];
    
    i = 0;
    
    while (i < 26)
    {
        abecedario[i] = 'a' + i;
        i++;
    }
    abecedario[i] = '\0';

    i = 0;
    while (abecedario[i] != '\0')
    {
        if (abecedario[i] == c)
        {
            return (26 - i - 1);
        }
        i++;
    }
    
    return (-1);
}

void imprimir_caracter(char c, int cuantosQuedan)
{
    int extra;

    extra = 0;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if (cuantosQuedan < 13)
        {
            extra = 13 - cuantosQuedan - 1;
            c = 'a';
            c = c + extra;
        }
        else
            c += 13;
    }
    write(1, &c, 1); 
}

void rot13(char *str)
{
    int i;
    int cuantosQuedan;

    i = 0;
    cuantosQuedan = 0;
    while (str[i] != '\0')
    {
        //cuantos numeros quedan hasta la "Z"
        if (str[i] >= 'A' && str[i] <= 'Z')
            cuantosQuedan = numero_letras(str[i] + 32);
        else if (str[i] >= 'a' && str[i] <= 'z')
            cuantosQuedan = numero_letras(str[i]);
        imprimir_caracter(str[i], cuantosQuedan);
        i++;
    }

    
}

int main(int argc, char *argv[])
{
    char *str;
    if (argc == 2)
    {
        str = argv[1];
        rot13(str);
    }
    write(1, "\n", 1);
    return (0);
}