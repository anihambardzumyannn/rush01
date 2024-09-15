/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_f_bottom.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:23:40 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:10:36 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_f_bottom(int **grid, int col)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 4 - 1;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
