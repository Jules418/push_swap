/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:18:06 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:08:12 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "node.h"

t_node	new_node(int value)
{
	t_node	n;

	n = (t_node)malloc(sizeof(struct s_node));
	if (!n)
		return (NULL);
	n->value = value;
	n->next = NULL;
	n->prev = NULL;
	return (n);
}

void	free_node(t_node n)
{
	if (!n)
		return ;
	free(n);
}
