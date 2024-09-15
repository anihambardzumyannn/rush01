/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:40:29 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:31:34 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	**create_grid(void);
int	**make_matrix(char *ptr);
int	solve_problem(int **grid, int row, int col, int num);
void	print_grid(int **grid);
void	free_grid(int **grid);

int	main(int argc, char *argv[])
{
	int	**grid;
	int	**param;

	if (argc != 2)
	{
		write(1, "INVALID PARAMETERS\n", 19);
		return (1);
	}
	grid = create_grid();
	param = make_matrix(argv[1]);
	if (solve_problem(grid, 0, 0, 4))
		print_grid(grid);
	else
		write(1, "ERROR\n", 6);
	free_grid(grid);
	free(param);
	return (0);
}
