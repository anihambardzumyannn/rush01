/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_f_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:20:47 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:10:19 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_f_top(int **grid, int col)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i++;
	}
	return (count);
}
