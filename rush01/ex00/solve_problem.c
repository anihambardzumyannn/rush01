/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_problem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:31:45 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:32:16 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_grid(int **grid, int **param);
int	check_access(int **grid, int row, int col, int num);

int	solve_problem(int **grid, int row, int col, int **param)
{
	int	num;

	if (row == 4)
		return (check_grid(grid, param));
	if (col == 4)
		return (solve_problem(grid, row + 1, 0, param));
	num = 1;
	while (num <= 4)
	{
		if (check_access(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_problem(grid, row, col + 1, param))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
