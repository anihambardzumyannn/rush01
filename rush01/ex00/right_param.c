/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:18:26 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:09:15 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*right_param(int **paras)
{
	int	*row_right;
	int	i;

	row_right = (int *)malloc(4 * 8);
	i = 0;
	while (i < 4)
	{
		row_right[i] = paras[3][i];
		i++;
	}
	return (row_right);
}
