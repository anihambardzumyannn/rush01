/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:09:26 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:09:03 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*top_param(int **paras)
{
	int	*col_top;
	int	i;

	col_top = (int *)malloc(4 * 8);
	i = 0;
	while (i < 4)
	{
		col_top[i] = paras[0][i];
		i++;
	}
	return (col_top);
}
