/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pepe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:23:26 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/25 01:04:21 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	fleaks(void)
{
	system("leaks -q cub3D");
}

int	main(int argc, char **argv)
{
	t_cosas		c;
	char		*str;

	str = "255,100,100";
	atexit(&fleaks);
	str = convert_color_to_hex(str);
	printf("Color code: [%s]\n", str);
	free(str);
	if (argc != 2)
		ft_print_error("Introduce un mapa!");
	parse_init(&c, argv);
	ft_print_matrix(c.map.textures, "img");
	ft_print_matrix(c.map.map, "map");
	return (exit(0), 0);
}
