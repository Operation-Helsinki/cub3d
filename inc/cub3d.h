/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:01:35 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/25 01:08:08 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

//Header files
# include "cub3d.h"
# include "libs.h"
# include "define.h"
# include "structures.h"

//Libft
# include "../libft/inc/libft.h"

# define MAP_WIDTH 24
# define MAP_HEIGHT 24
# define SCREEN_WIDTH 640
# define SCREEN_HEIGHT 480

extern int	g_c_map[MAP_WIDTH][MAP_HEIGHT];

int		ft_input(int keycode, t_mlx *mlx);
int		hook_exit(t_mlx *mlx);
void	cube_init(t_mlx *mlx);
void	my_mlx_pixel_put(t_mlx *data, int x, int y, int color);
void	raycasting(t_mlx *mlx);
void	vertical_texture(t_raycasting *r, t_mlx	*mlx, double pwd);
void	draw_textures(t_raycasting *r, t_mlx *mlx, t_vtex *v);

//Parse
void	parse_init(t_cosas *c, char **argv);

//Open & Store Map
int		ft_open_file(char *path);
void	ft_store_file(t_cosas *c);
void	ft_store_textures(t_cosas *c);
void	ft_store_map(t_cosas *c);

//Utils
void	ft_perror(char *str);
void	ft_print_error(char *str);
int		ft_str_is_space(char *str);

//Color
char	*convert_color_to_hex(char *str);

//Map Validator

//Input & movement
int		ft_exit(void);

//Draw

//Floof_fill

//Read Map
void	ft_count_things(t_cosas *c);
void	ft_store_things(t_cosas *c);

#endif
