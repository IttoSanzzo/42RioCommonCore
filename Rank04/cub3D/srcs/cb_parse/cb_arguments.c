/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:14:04 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 11:01:24 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_def_textures(t_data *data)
{
	if (data->tx.no_t == NULL)
		data->tx.no_t = ft_strdup(DEF_TX_NO);
	if (data->tx.ea_t == NULL)
		data->tx.ea_t = ft_strdup(DEF_TX_EA);
	if (data->tx.so_t == NULL)
		data->tx.so_t = ft_strdup(DEF_TX_SO);
	if (data->tx.we_t == NULL)
		data->tx.we_t = ft_strdup(DEF_TX_WE);
	if (data->tx.c_set == 0)
	{
		data->tx.f_cl[0] = DEF_F_R;
		data->tx.f_cl[1] = DEF_F_G;
		data->tx.f_cl[2] = DEF_F_B;
	}
	if (data->tx.c_set == 0)
	{
		data->tx.c_cl[0] = DEF_C_R;
		data->tx.c_cl[1] = DEF_C_G;
		data->tx.c_cl[2] = DEF_C_B;
	}
}

static void	cb_check_cub(char *file)
{
	int	i;

	i = ft_strlen(file);
	while (file[--i])
		if (file[i] == '.' && !ft_strncmp((char *)(file + i), ".cub", 5))
			return ;
	cb_error(ERR_MSS_CUB);
}

void	cb_arguments(t_data *data, char *file)
{
	cb_check_cub(file);
	if (ft_ftot(file, &(data->parse.import), '\n') == -1)
		cb_error(ERR_MSS_NF);
	cb_base_format_import(data);

	cb_def_textures(data);
	
	(void)data;
}
