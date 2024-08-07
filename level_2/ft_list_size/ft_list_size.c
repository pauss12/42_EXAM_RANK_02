#include <unistd.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int num;

	num = 0;
	while (begin_list != NULL)
	{
		num++;
		begin_list = begin_list->next;
	}
	return (num);
}
