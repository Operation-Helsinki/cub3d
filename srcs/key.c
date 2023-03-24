/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:39:54 by davgarci          #+#    #+#             */
/*   Updated: 2023/03/24 22:19:07 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	hook_exit(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit(EXIT_SUCCESS);
	return (0);
}

void	my_mlx_pixel_put(t_mlx *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	ft_input(int keycode, t_mlx *mlx)
{
	double	old_dir_x;
	double	old_plane_x;

	printf("pos_x[%f] poxY[%f] dir_x[%f] dir_y[%f]",
		mlx->pos_x, mlx->pos_y, mlx->dir_x, mlx->dir_y);
	printf("theta[%f] plane_x[%f] plane_y[%f]\n",
		mlx->teta, mlx->plane_x, mlx->plane_y);
	if (keycode == LEFT)
	{
		old_dir_x = mlx->dir_x;
		mlx->dir_x = mlx->dir_x * cos(ROT_MS) - mlx->dir_y * sin(ROT_MS);
		mlx->dir_y = old_dir_x * sin(ROT_MS) + mlx->dir_y * cos(ROT_MS);
		old_plane_x = mlx->plane_x;
		mlx->plane_x = mlx->plane_x * cos(ROT_MS) - mlx->plane_y * sin(ROT_MS);
		mlx->plane_y = old_plane_x * sin(ROT_MS) + mlx->plane_y * cos(ROT_MS);
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == RIGHT)
	{
		old_dir_x = mlx->dir_x;
		mlx->dir_x = mlx->dir_x * cos(-ROT_MS) - mlx->dir_y * sin(-ROT_MS);
		mlx->dir_y = old_dir_x * sin(-ROT_MS) + mlx->dir_y * cos(-ROT_MS);
		old_plane_x = mlx->plane_x;
		mlx->plane_x = mlx->plane_x * cos(-ROT_MS) - mlx->plane_y * sin(-ROT_MS);
		mlx->plane_y = old_plane_x * sin(-ROT_MS) + mlx->plane_y * cos(-ROT_MS);
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == A)
	{
		if (g_c_map[(int)(mlx->pos_x - mlx->dir_y * MS)][(int)mlx->pos_y] == 0)
			mlx->pos_x -= mlx->dir_y * MS;
		if (g_c_map[(int)mlx->pos_x][(int)(mlx->pos_y + mlx->dir_x * MS)] == 0)
			mlx->pos_y += mlx->dir_x * MS;
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == D)
	{
		if (g_c_map[(int)(mlx->pos_x + mlx->dir_y * MS)][(int)mlx->pos_y] == 0)
			mlx->pos_x += mlx->dir_y * MS;
		if (g_c_map[(int)mlx->pos_x][(int)(mlx->pos_y - mlx->dir_x * MS)] == 0)
			mlx->pos_y -= mlx->dir_x * MS;
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == W)
	{
		if (g_c_map[(int)(mlx->pos_x + mlx->dir_x * MS)][(int)mlx->pos_y] == 0)
			mlx->pos_x += mlx->dir_x * MS;
		if (g_c_map[(int)mlx->pos_x][(int)(mlx->pos_y + mlx->dir_y * MS)] == 0)
			mlx->pos_y += mlx->dir_y * MS;
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == S)
	{
		if (g_c_map[(int)(mlx->pos_x - mlx->dir_x * MS)][(int)mlx->pos_y] == 0)
			mlx->pos_x -= mlx->dir_x * MS;
		if (g_c_map[(int)mlx->pos_x][(int)(mlx->pos_y - mlx->dir_y * MS)] == 0)
			mlx->pos_y -= mlx->dir_y * MS;
		mlx_destroy_image(mlx->mlx, mlx->img);
		mlx->img = mlx_new_image(mlx->mlx, mlx->win_w, mlx->win_h);
		mlx->addr = mlx_get_data_addr(mlx->img, &(mlx->bits_per_pixel),
				&(mlx->line_length), &(mlx->endian));
		raycasting(mlx);
	}
	if (keycode == ESC)
		exit(1);
	return (0);
}
