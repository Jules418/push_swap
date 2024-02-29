/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:11:17 by jules             #+#    #+#             */
/*   Updated: 2024/02/29 22:59:34 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

# include "node.h"
# include <stdlib.h>

typedef struct s_deque
{
	size_t	size;
	t_node	front;
	t_node	back;
}	*t_deque;

t_deque	new_deque(void);
int		is_empty(t_deque d);
t_node	pop(t_deque d);
t_node	pop_back(t_deque d);
void	push(t_deque d, t_node n);
void	push_back(t_deque d, t_node n);
void	free_deque(t_deque d);

int		get_front_value(t_deque d);
int		is_deque_sorted(t_deque d);

void	swap(t_deque d);
void	rotate(t_deque d);
void	reverse_rotate(t_deque d);

#endif