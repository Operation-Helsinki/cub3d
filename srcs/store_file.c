/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:15:35 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/09 02:33:05 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_file_size(t_cosas *c)
{
	char	*line;

	c->fd = open(c->args.argv[1], O_RDONLY);
	if (c->fd == -1)
		ft_perror("");
	line = "";
	while (line)
	{
		line = get_next_line(c->fd);
		if (line)
			c->map.file_size++;
		else
			break ;
	}
	close(c->fd);
}

void	ft_store_file(t_cosas *c)
{
	int	i;

	i = 0;
	ft_file_size(c);
	c->fd = open(c->args.argv[1], O_RDONLY);
	if (c->fd == -1)
		ft_perror("");
	c->map.file = (char **)malloc((c->map.file_size + 2) * sizeof(char *));
	c->map.file[c->map.file_size] = NULL;
	while (i < c->map.file_size)
	{
		c->map.file[i] = get_next_line(c->fd);
		if (!c->map.file[i])
			ft_free_matrix(c->map.file);
		i++;
	}
}
