/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:01:35 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/11 17:34:20 by psegura-         ###   ########.fr       */
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

//Open & Store Map
int		ft_open_file(char *path);
void	ft_store_file(t_cosas *c);
void	ft_store_textures(t_cosas *c);
void	ft_store_map(t_cosas *c);

//Utils
void	ft_perror(char *str);
void	ft_print_error(char *str);
// int		ft_str_is_space(char *str);

//Map Validator

//Input & movement
int		ft_exit(void);

//Draw

//Floof_fill

void	ft_count_things(t_cosas *c);
void	ft_store_things(t_cosas *c);

#endif
