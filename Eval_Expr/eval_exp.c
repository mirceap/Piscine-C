#include <stdio.h>
#include <stdlib.h>

typedef struct 		Node
{
	int 		data;
	struct Node 	*next;
}			Node;

Node	*ft_create_elem(int *data)
{
	Node *new_elem;

	new_elem = (Node *)malloc(sizeof(Node));
	if (new_elem)
	{
		new_elem->data = *data;
		new_elem->next = NULL;
	}
	return (new_elem);
}



void	push(Node **top, int x)
{
	Node *temp;

	temp = ft_create_elem(&x);
	temp -> next = *top;
	*top = temp;
}

void	pop(Node **top)
{
	Node *temp;
	if (*top == NULL){
		return ;
	temp = *top;
	if (temp)
	{
		*top = temp->next;
		free(temp);
	}
}

int	isEmpty(Node **top)
{
	if (*top == NULL)
		return (0);
	return (1);
}

int	top_elem(Node **top)
{
	Node *temp;
	if (*top == NULL)
	{
		return (0);
	}
	temp = *top;
	return (temp->data);
}

void	printList(Node **list)
{
	Node *temp;
	temp = *list;
	while (temp)
	{
		printf(" %d ",temp->data);
		temp = temp->next;
	}
}


/*
   infif_to_postfix(char *exp)
   {
   int i = 0;
   create stack s
   int res;
   while (i < len(exp))
   {
   	if exp[i] is operand
		res += exp[i]
	else if (exp[i] is operator)
	{
		while (!s.is_empty && has_openeing_paran(s.top()) && 
			has_higher_precedence(s.top(), exp[i]))
		{
			res += s.top();
			s.pop();
		}
		s.push(exp[i])
	}
	else if (is_opening_paran(exp[i])
		s.push(exp[i]);
	else if (is_closing_paran(exp[i]))
	{
		while (!s.empty() && !is_opening_paran(s.top())
		{
			res += s.top();
			s.pop();
		}
	s.pop()
	}
	i++;
	return (res);
}
*/
/*
int	infix_to_postfix(char *expr)
{


}
*/



int	main()//int ac, char **av)
{

	Node *list = NULL;
	push(&list, 3);
	push(&list, 3);
	printf("Is empty: %i\n", isEmpty(&list));
	//printf("%i\n", top_elem(&list));
	pop(&list);
	printf("Is empty: %i\n", isEmpty(&list));
	pop(&list);
	printList(&list);
	pop(&list);
	printf("Is empty: %i\n", isEmpty(&list));
/*
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
	*/
}

