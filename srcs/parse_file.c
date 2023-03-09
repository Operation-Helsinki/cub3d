/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:15:31 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/09 03:23:51 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_texture_on_file(char *line)
{
	int			i;
	static char	*textures[] = {"NO", "SO", "WE", "EA", "F", "C", NULL};

	if (!line)
		return (0);
	i = -1;
	while (textures[++i])
		if (ft_strnstr(line, textures[i], ft_strlen(line)) != NULL)
			return (1);
	return (0);
}

int	ft_count_map(t_cosas *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (c->map.file[i])
	{
		if (ft_texture_on_file(c->map.file[i]) == 0
			&& ft_strlen(c->map.file[i]) > 1)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}

void	ft_store_textures(t_cosas *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	c->map.textures = (char **)malloc((6 + 1) * sizeof(char *));
	while (c->map.file[i])
	{
		if (ft_texture_on_file(c->map.file[i]))
		{
			c->map.textures[j] = ft_strdup(ft_strtrim(c->map.file[i], "\n"));
			j++;
			i++;
		}
		else
			i++;
	}
	c->map.textures[6] = NULL;
}

void	ft_store_map(t_cosas *c)
{
	int	i;
	int	j;
	int	other;

	i = 0;
	j = 0;
	other = ft_count_map(c);
	c->map.map = (char **)malloc((other + 1) * sizeof(char *));
	while (c->map.file[i])
	{
		if (ft_texture_on_file(c->map.file[i]) == 0
			&& ft_strlen(c->map.file[i]) > 1)
		{
			c->map.map[j] = ft_strdup(ft_strtrim(c->map.file[i], "\n"));
			j++;
			i++;
		}
		else
			i++;
	}
	c->map.map[other] = NULL;
}
