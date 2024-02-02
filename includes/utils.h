/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:51:13 by jules             #+#    #+#             */
/*   Updated: 2024/01/28 01:50:27 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <limits.h>

int		is_sorted(int arr[], size_t len);
void	quick_sort(int arr[], size_t len);
int		have_doublons(int arr[], size_t len);
size_t	find_e(int arr[], size_t len, int e);
size_t	ln2(size_t n);
char	**ft_split(char *s, char sep);
void	free_split(char **split_res);
int		ft_atoi(char *n, int *err_code);

#endif