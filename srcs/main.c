/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:23:26 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/11 17:44:19 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init(t_cosas *c, char **argv)
{
	ft_memset(c, 0, sizeof(t_cosas));
	c->args.argv = argv;
	ft_store_file(c);
	ft_count_things(c);
	ft_store_things(c);
}

int	main(int argc, char **argv)
{
	t_cosas		c;

	if (argc != 2)
		ft_print_error("Introduce un mapa!\n");
	ft_init(&c, argv);
	ft_print_matrix(c.map.textures, "img");
	ft_print_matrix(c.map.map, "map");
	return (0);
}

	// ft_print_matrix(c.map.file, "file");
	// system("leaks -q cub3D");