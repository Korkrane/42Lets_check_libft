#include <stdio.h>
#include "../../libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new);

t_list	*ft_lstnew(void *content)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list) * 1);
	if (!new_list)
		return (NULL);
	if (new_list)
	{
		new_list->content = content;
		new_list->next = NULL;
	}
	return (new_list);
}

void	print_elem(t_list element)
{
	printf("%s\n", (char *)element.content);
}

int main()
{
	t_list *liste;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *elem5;
	t_list *elem6;
	t_list *elem7;
	t_list *elem8;
	t_list *elem9;

	liste = ft_lstnew("Test 1");
	elem1 = ft_lstnew("Bonjour");
	elem2 = ft_lstnew("tu");
	elem3 = ft_lstnew("Veux");
	elem4 = ft_lstnew("bien");
	elem5 = ft_lstnew("norminet");
	elem6 = ft_lstnew("bahaas-testing");
	elem7 = ft_lstnew("42");
	elem8 = ft_lstnew("hello world");
	elem9 = ft_lstnew("end");
	liste->next = NULL;
	ft_lstadd_back(&liste, elem2);
	ft_lstadd_back(&liste, elem8);
	ft_lstadd_back(&liste, elem3);
	ft_lstadd_back(&liste, elem1);
	ft_lstadd_back(&liste, elem7);
	ft_lstadd_back(&liste, elem6);
	ft_lstadd_back(&liste, elem5);
	ft_lstadd_back(&liste, elem4);
	ft_lstadd_back(&liste, elem9);
	while(liste)
	{
		print_elem(*liste);
		liste = liste->next;
	}
	return 0;
}
