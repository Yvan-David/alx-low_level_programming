#include "lists.h"
/**
 * print_list - print
 * @h: the pointer
 * Return: number
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *p = h;

	i = 0;
	while(p)
	{
		if (!(p->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		i++;
		p = p->next;
	}
	return (i);
}
