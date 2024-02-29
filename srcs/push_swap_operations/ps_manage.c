/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_manage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:10 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:18:57 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	new_ps(void)
{
	t_ps	p;

	p = malloc(sizeof(struct s_ps));
	if (!p)
		return (NULL);
	p->a = new_deque();
	p->b = new_deque();
	p->len = 0;
	p->sorted_arr = NULL;
	return (p);
}

void	free_ps(t_ps p)
{
	if (!p)
		return ;
	free_deque(p->a);
	free_deque(p->b);
	if (p->sorted_arr)
		free(p->sorted_arr);
	free(p);
}
