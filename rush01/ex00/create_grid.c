/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:47:34 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:06:24 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	**create_grid(void)
{
	int	**grid;
	int	i;

	grid = (int **)malloc(4 * 8);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * 8);
		if (grid[i] == NULL)
		{
			write(1, "FAILED MEMORY ALLOCATION\n", 26);
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	return (grid);
}
