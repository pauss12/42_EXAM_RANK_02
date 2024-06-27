Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);


#ALGUNAS DE LAS PRUEBAS QUE HICE:

./a.out "OH ! 13268!" | cat -e

./a.out "13268!" | cat -e

./a.out "-13268!" | cat -e

./a.out "+13268!" | cat -e