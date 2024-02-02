/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 04:01:46 by jules             #+#    #+#             */
/*   Updated: 2024/01/28 01:54:45 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "push_swap.h"
#include "sorts.h"

void	print_deque(t_deque d)
{
	t_node	current;

	current = d->front;
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
}

int	is_deque_sorted(t_deque d)
{
	t_node	current;
	int		last;

	if (!d)
		return (0);
	if (d->size <= 1)
		return (1);
	current = d->front;
	last = current->value;
	current = current->next;
	while (current)
	{
		if (last > current->value)
			return (0);
		last = current->value;
		current = current->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_ps	p;
	t_node	n;
	int		err;
	int		nb_op;

	if (argc == 1)
		return (1);
	p = new_ps();
	err = 0;
	for(int i = 1; i < argc; i++)
	{
		n = new_node(ft_atoi(argv[i], &err));
		push_back(p->a, n);
	}
	nb_op = radix_sort(p);
	//print_deque(p->a);
	printf("nb_op : %d\n", nb_op);
	printf("is_sorted : %d\n", is_deque_sorted(p->a));
	free_ps(p);
	return (0);
}
