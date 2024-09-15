/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:45:53 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:40:35 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_direction(int expected, int actual);
int	*left_param(int **paras);
int	*right_param(int **paras);
int	*top_param(int **paras);
int	*bottom_param(int **paras);
int	count_visible_f_top(int **grid, int col);
int	count_visible_f_bottom(int **grid, int col);
int	count_visible_f_right(int **grid, int row);
int	count_visible_f_left(int **grid, int row);

int	check_grid(int **grid, int **param)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_direction(*left_param(param),
				count_visible_f_left(grid, i))
			|| !check_direction(*right_param(param),
				count_visible_f_right(grid, i))
			|| !check_direction(*top_param(param),
				count_visible_f_top(grid, i))
			|| !check_direction(*bottom_param(param),
				count_visible_f_bottom(grid, i)))
		{
			free(grid);
			return (0);
		}
		i++;
	}
	return (1);
}
