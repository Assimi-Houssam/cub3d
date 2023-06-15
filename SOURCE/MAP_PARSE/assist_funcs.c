/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assist_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeftah <hmeftah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:46:45 by hmeftah           #+#    #+#             */
/*   Updated: 2023/06/15 16:45:49 by hmeftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../INCLUDES/parse.h"

void	free_2d_array(char	**ptr)
{
	int	i;

	i = -1;
	if (!ptr)
		return ;
	while (ptr[++i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
	}
	free (ptr);
}

void	print_map_cnf(t_cnf *data)
{
	int		i;
	char	*type;

	i = -1;
	while (data->textures[++i])
	{
		if (i == NO)
			type = "NO";
		else if (i == SO)
			type = "SO";
		else if (i == WE)
			type = "WE";
		else if (i == EA)
			type = "EA";
		ft_printf(1, "[%s] [Path]: %s\n", type, data->textures[i]);
	}
	ft_printf(1, "[F] [R: %d, G: %d, B: %d]\n", data->f_value[0],
		data->f_value[1], data->f_value[2]);
	ft_printf(1, "[C] [R: %d, G: %d, B: %d]\n", data->c_value[0],
		data->c_value[1], data->c_value[2]);
	i = -1;
	while (data->map[++i])
		ft_printf(1, "%s\n", data->map[i]);
}
