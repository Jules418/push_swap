/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 04:18:55 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:09:24 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "deque.h"
# include <stdlib.h>

typedef struct s_ps
{
	t_deque	a;
	t_deque	b;
}	*t_ps;

t_ps	new_ps(void);
void	free_ps(t_ps p);

void	sa(t_ps p);
void	sb(t_ps p);
void	ss(t_ps p);

void	pa(t_ps p);
void	pb(t_ps p);

void	ra(t_ps p);
void	rb(t_ps p);
void	rr(t_ps p);

void	rra(t_ps p);
void	rrb(t_ps p);
void	rrr(t_ps p);

#endif