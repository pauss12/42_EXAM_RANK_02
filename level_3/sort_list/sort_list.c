#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *aux;
	int data;

	aux = lst;
	data = 0;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = data;
			lst = aux;
		}
		else
			lst = lst->next;
	}
	lst = aux;
	return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

t_list *create_list()
{
	t_list *aux;
	t_list *nodo;
	int i;

	i = 5;
	aux = NULL;
	nodo = NULL;
	while (i >= 0)
	{
		nodo = malloc(sizeof(t_list));
		nodo->data = i;
		nodo->next = NULL;

		if (aux == NULL)
		{
			aux = nodo;
		}
		else
		{
			t_list *temp;

			temp = aux;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = nodo;
		}
		i--;
	}
	printf("\n\n");
	return (aux);
}

int main()
{
	t_list *lista;
	t_list *temp;

	lista = create_list();
	temp = lista;
	while (temp != NULL)
	{
		printf("El valor del nodo es %d\n", (temp)->data);
		(temp) = (temp)->next;
	}

	printf("Imprime la lista\n");
	sort_list(lista, ascending);

	printf("Sale de sort list\n");
	temp = lista;
	while (temp != NULL)
	{
		printf("El valor del nodo es %d\n", (temp)->data);
		(temp) = (temp)->next;
	}

	temp = lista;
	while (temp != NULL)
	{
		t_list *next = temp->next;
		free(temp);
		temp = next;
	}
}
