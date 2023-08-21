#include "shell.h"

/**
 * list_len - determines length of linked thec list
 * @h: pointer to first node the feredffsfg
 *
 * Return: size of list the free codes ght
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}

/**
 * list_to_strings - returns the file trings of the list->str
 * @head: pointer to first node mode freew
 *
 * Return: array of strings the filess ced
 */
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t k = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !k)
		return (NULL);
	strs = malloc(sizeof(char *) * (k + 1));
	if (!strs)
		return (NULL);
	for (k = 0; node; node = node->next, k++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < k; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[k] = str;
	}
	strs[k] = NULL;
	return (strs);
}


/**
 * print_list - prints all el thefst_t linked list
 * @h: pointer to first node theffvgf
 *
 * Return: size of list the y nikree
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		_puts(convert_number(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		k++;
	}
	return (k);
}

/**
 * node_starts_with - returns gfhjjg jytng starts with prefix
 * @node: pointer to list header fioles blkhg
 * @prefix: string to matched to thddvb gd gf
 * @c: the next character after prefix to nsrgfdo match
 *
 * Return: match node or null ooh beffxd
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
 * get_node_index - gets the index of yhra node
 * @head: pointer to list header files
 * @node: pointer to the to the  ngfd node
 *
 * Return: indexi vo the of node or -1
 */
ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t k = 0;

	while (head)
	{
		if (head == node)
			return (k);
		head = head->next;
		k++;
	}
	return (-1);
}
