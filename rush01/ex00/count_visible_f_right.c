/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_f_right.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:26:16 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:11:34 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_f_right(int **grid, int row)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 4 - 1;
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
		i--;
	}
	return (count);
}
