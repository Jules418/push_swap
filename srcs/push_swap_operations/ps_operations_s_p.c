/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations_s_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:09:14 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:07:54 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps p)
{
	if (!p)
		return ;
	swap(p->a);
}

void	sb(t_ps p)
{
	if (!p)
		return ;
	swap(p->b);
}

void	ss(t_ps p)
{
	sa(p);
	sb(p);
}

void	pa(t_ps p)
{
	if (!p)
		return ;
	push(p->a, pop(p->b));
}

void	pb(t_ps p)
{
	if (!p)
		return ;
	push(p->b, pop(p->a));
}
