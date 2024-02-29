/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 04:01:46 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 18:27:33 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "push_swap.h"
#include "sorts.h"
#include "input_manager.h"

void	print_deque(t_deque d)
{
	t_node	current;

	current = d->front;
	while (current)
	{
		printf("%ld\n", current->value);
		current = current->next;
	}
}

int	is_deque_sorted(t_deque d)
{
	t_node	current;
	size_t	last;

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
	// int		nb_op;

	if (argc == 1)
		return (1);
	p = initialize_ps(argc, argv);
	if (!p)
	{
		write(2, "Error\n", 6);
		return (EXIT_FAILURE);
	}
	
	//print_deque(p->a);
	// printf("\nsorting:\n");
	// nb_op = radix_sort(p);
	if (!is_deque_sorted(p->a))
		radix_sort(p);
	// print_deque(p->a);
	// printf("nb_op : %d\n", nb_op);
	// printf("is_sorted : %d\n", is_deque_sorted(p->a));
	free_ps(p);
	return (EXIT_SUCCESS);
}
