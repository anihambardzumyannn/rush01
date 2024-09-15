/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bottom_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:13:01 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:08:48 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*bottom_param(int **paras)
{
	int	*col_bottom;
	int	i;

	col_bottom = (int *)malloc(4 * 8);
	i = 0;
	while (i < 4)
	{
		col_bottom[i] = paras[1][i];
		i++;
	}
	return (col_bottom);
}
