/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_s_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:09:14 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:24:43 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps p, int print)
{
	if (!p)
		return ;
	swap(p->a);
	if (print)
		write(1, "sa\n", 3);
}

void	sb(t_ps p, int print)
{
	if (!p)
		return ;
	swap(p->b);
	if (print)
		write(1, "sb\n", 3);
}

void	ss(t_ps p, int print)
{
	sa(p, 0);
	sb(p, 0);
	if (print)
		write(1, "ss\n", 3);
}

void	pa(t_ps p, int print)
{
	if (!p)
		return ;
	push(p->a, pop(p->b));
	if (print)
		write(1, "pa\n", 3);
}

void	pb(t_ps p, int print)
{
	if (!p)
		return ;
	push(p->b, pop(p->a));
	if (print)
		write(1, "pb\n", 3);
}
