/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_arguments.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:14:04 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 23:12:18 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void	cb_check_cub(char *file)
{
	int	i;

	i = ft_strlen(file);
	while (file[--i])
		if (file[i] == '.' && !ft_strncmp((char *)(file + i), ".cub", 5))
			return ;
	cb_error(ERR_MSS_CUB);
}

static void	cb_import_file(t_data *data, char *file)
{
	int		fd;
	char	*line;
	char	*raw;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		cb_error(ERR_MSS_NF);
	raw = ft_strdup("");
	line = get_next_line(fd);
	while (line)
	{
		ft_freejoin(&raw, &line);
		line = get_next_line(fd);
	}
	close(fd);
	data->parse.import = ft_split(raw, '\n');
	ft_nfreestr(&raw);
}

void	cb_arguments(t_data *data, char *file)
{
	cb_check_cub(file);
	cb_import_file(data, file);
	cb_base_format_import(data);
	
	ft_puttab(data->parse.import, "");
	
	(void)data;
}
