/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jules <jules@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:51:13 by jules             #+#    #+#             */
/*   Updated: 2024/03/07 00:38:44 by jules            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <limits.h>

int		is_sorted(int arr[], size_t len);
void	quick_sort(int arr[], size_t len);
int		have_duplicates(int arr[], size_t len);
size_t	find_e(int arr[], size_t len, int e);
size_t	ln2(size_t n);
char	**ft_split(char *s, char sep);
void	free_split(char **split_res);
size_t	len_split(char **split_res);
int		ft_atoi(char *n, int *err_code);
int		*ft_copy_arr(int *arr, size_t len);

#endif