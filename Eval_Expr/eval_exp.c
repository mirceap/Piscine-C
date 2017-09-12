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
	if (*top == NULL)
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i++])
		;
	return (--i);
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

int		is_operand(char *c)
{
	int i;
	
	i = 0;
	while (c[i] != ' ' && c[i])
	{
		if (c[i] < '0' && c[i] > '9')
			return (1);
		i++;
	}
	return (0);
}


int		is_operator(char c)
{
	if (c == '%' || c == '/' || c == '-' || c == '+' || c == '*')
		return (1);
	return (0);
}

int		has_closing_paran(Node **list)
{
	Node *temp;

	temp = *list;
	while (temp)
	{
		if (temp->data == ')')
			return (0);
		temp = temp->next;
	}
	return (1);
}

int		has_opening_paran(Node  **list)
{
	Node *temp;

	temp = *list;
	while (temp)
	{
		if (temp->data == '(')
			return (0);
		temp = temp->next;
	}
	return (1);
}

int		has_higher_precedence(char a, char b)
{
	if ((a == '-' || a == '+') && (b == '-' || b == '+'))
		return (0);
	if ((a == '*' || a == '/' || a == '%') && (b == '-' || b == '+'))
		return (1);
	if ((a == '-' || a == '+') && (b == '*' || b == '/' || b == '%'))
		return (0);
	if ((a == '*' || a == '/' || a == '%') &&
		(b == '*' || b == '/' || b == '%'))
		return (0);
	return (-1);
}


/*
   infif_to_postfix(char *exp)
   {
   int i = 0;
   create stack s
   char res[1000];
   while (i < len(exp))
   {
   //append operand
   	if exp[i] is operand
		res += exp[i]
	// look for opeator in the stack
	else if (exp[i] is operator)
	{
	//check for higher precedence in the stack and if there is an open paran
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

char	*infix_to_postfix(char *expr, char *res)
{
	int i;
	
	i = 0;

	while (expr[i])
	{
		printf("%c", expr[i]);
		i++;
	}
	printf("\n");
	i = 0;
	Node *stack = NULL;
	while (i < ft_strlen(expr) - 1)
	{
		if (is_operand(&expr[i]))
			res[i] = expr[i];
		else if (is_operator(expr[i]))
		{
			while (isEmpty(&stack) != 0 && has_opening_paran(&stack) && has_higher_precedence((char)top_elem(&stack), expr[i]))
						{
							res[i] = top_elem(&stack);
							pop(&stack);
						}
			push(&stack, expr[i]);
		}
		else if (expr[i] == '(')
			push(&stack, expr[i]);
		else if (expr[i] == '(')
		{
			while (isEmpty(&stack) && !has_opening_paran(&stack))
			{
				res[i] = top_elem(&stack);
				pop(&stack);
			}
		pop(&stack);
		}
		i++;
	}
	return (res);
}


int	main()//int ac, char **av)
{
	char *exp = "3 + 12 - 4 * 2";
	char res[1000];
	int i;

	Node *list = NULL;

	i = 0;
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
	infix_to_postfix(exp, res);
	while (res[i])
	{
		printf("\n%c\n", res[i]);
		i++;
	}
/*
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
	*/
}

