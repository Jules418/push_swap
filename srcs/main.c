/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 04:01:46 by jules             #+#    #+#             */
/*   Updated: 2024/03/07 00:35:37 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "push_swap.h"
#include "sorts.h"
#include "input_manager.h"

int	main(int argc, char **argv)
{
	t_ps	p;

	if (argc == 1)
		return (1);
	p = initialize_ps(argc, argv);
	if (!p)
	{
		write(2, "Error\n", 6);
		return (EXIT_FAILURE);
	}
	if (!is_deque_sorted(p->a))
	{
		if (p->len == 2)
			sa(p, 1);
		else if (p->len == 3)
			sort3(p);
		else if (p->len == 4)
			sort4(p);
		else if (p->len == 5)
			sort5(p);
		else
			radix_sort(p);
	}
	free_ps(p);
	return (EXIT_SUCCESS);
}
