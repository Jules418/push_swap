/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_manage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:10 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:08:01 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	new_ps(void)
{
	t_ps	p;

	p = malloc(sizeof(struct s_ps));
	p->a = new_deque();
	p->b = new_deque();
	return (p);
}

void	free_ps(t_ps p)
{
	if (!p)
		return ;
	free_deque(p->a);
	free_deque(p->b);
	free(p);
}
