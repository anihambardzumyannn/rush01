/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_f_left.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:29:39 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:11:03 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_f_left(int **grid, int row)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			count++;
		}
	}
	return (count);
}
