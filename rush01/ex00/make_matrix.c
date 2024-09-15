/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ani <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:03:56 by ani               #+#    #+#             */
/*   Updated: 2024/09/15 22:07:49 by ani              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	**create_grid(void);

int	**make_matrix(char *ptr)
{
	int	j;
	int	i;
	int	**parameters;

	parameters = create_grid();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			parameters[i][j] = *ptr - '0';
			ptr += 2;
			j++;
		}
		i++;
	}
	return (parameters);
}
