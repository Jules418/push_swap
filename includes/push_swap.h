/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 04:18:55 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 23:22:51 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "deque.h"

typedef struct s_ps
{
	t_deque	a;
	t_deque	b;
	int		*sorted_arr;
	size_t	len;
}	*t_ps;

t_ps	new_ps(void);
void	free_ps(t_ps p);

void	sa(t_ps p, int print);
void	sb(t_ps p, int print);
void	ss(t_ps p, int print);

void	pa(t_ps p, int print);
void	pb(t_ps p, int print);

void	ra(t_ps p, int print);
void	rb(t_ps p, int print);
void	rr(t_ps p, int print);

void	rra(t_ps p, int print);
void	rrb(t_ps p, int print);
void	rrr(t_ps p, int print);

#endif