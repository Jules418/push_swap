/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:14:47 by jules             #+#    #+#             */
/*   Updated: 2024/01/24 15:08:37 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
# define NODE_H

# include <stdlib.h>

typedef struct s_node	*t_node;

struct s_node
{
	int		value;
	t_node	prev;
	t_node	next;
};

t_node	new_node(int value);
void	free_node(t_node n);

#endif