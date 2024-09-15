/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalcode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganersis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:28:27 by ganersis          #+#    #+#             */
/*   Updated: 2024/09/15 21:23:46 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define N 4

int	g_grid[N][N] = {0};
int	g_row_left[N];
int	g_row_right[N];
int	g_col_top[N];
int	g_col_bottom[N];

int	check_access(int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (g_grid[row][i] == num || g_grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible_f_left(int row)
{
	int	max;
	int	count;
	int	i;

	count = 0;
	max = 0;
	i = 0;
	while (i < N)
	{
		if (g_grid[row][i] > max)
		{
			max = g_grid[row][i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible_f_right(int row)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (g_grid[row][i] > max)
		{
			max = g_grid[row][i];
			count++;
		}
		i--;
	}
	return (count);
}

int	count_visible_f_bottom(int col)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (g_grid[i][col] > max)
		{
			max = g_grid[i][col];
			count++;
		}
		i--;
	}
	return (count);
}

int	count_visible_f_top(int col)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < N)
	{
		if (g_grid[i][col] > max)
		{
			max = g_grid[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_grid(void)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (count_visible_f_left(i) != g_row_left[i]
				|| count_visible_f_right(i) != g_row_right[i] 
				|| count_visible_f_top(i) != g_col_top[i] 
				|| count_visible_f_bottom(i) != g_col_bottom[i]) 
		{
            return (0);
        }
        i++;
    }
    return (1);
}

int	solve_problem(int row, int col)
{
	int	num;
   
	num = 1;
	if (row == N)
		return (check_grid());
	if (col == N)
		return (solve_problem(row + 1, 0));
	while (num <= N)
	{
		if (check_access(row, col, num))
		{
			g_grid[row][col] = num;
			if (solve_problem(row, col + 1))
				return (1);
			write(1,"JNJECI ",7);
			char k = g_grid[row][col] + '0';
			write(1,&k,1);
			write(1,"\n",1);
			g_grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	print_grid(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < N) 
	{
		j = 0;
		while (j < N) 
		{
			printf("%d ", g_grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
*/
int main(int argc, char **argv)
{
	if (argc == 2) 
	{
		char *ptr = argv[1];
		int i = 0;

		while (i < N)
		{
			g_col_top[i] = *ptr - '0';
			ptr += 2;
			i++;
        }

        i = 0;
        while (i < N)
		{
			g_col_bottom[i] = *ptr - '0';
			ptr += 2;
			i++;
		}
		i = 0;
		while (i < N)
		{
			g_row_left[i] = *ptr - '0';
			ptr += 2;
			i++;
		}

		i = 0;
		while (i < N)
		{
			g_row_right[i] = *ptr - '0';
			ptr += 2;
			i++;
		}

		if (solve_problem(0, 0))
		{
			print_grid();
        } 
		else
		{
			write(1,"ERROR\n",6);
		}
	} 
	else
	{
		write(1,"INVALID PARAMETERS\n", 19);
	}
}
