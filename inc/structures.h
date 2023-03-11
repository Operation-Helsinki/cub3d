/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 03:36:31 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/11 14:31:52 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

//Map requiriments
typedef struct s_reqs {
	int		c_count;
	int		e_count;
	int		p_count;
}	t_reqs;

typedef struct s_count {
	int		i;
	int		j;
}	t_count;

typedef struct s_args {
	int		argc;
	char	**argv;
}	t_args;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

//Map & data map
typedef struct s_map {	
	char	**file;
	int		file_size;
	char	**map;
	char	**textures;
	int		t_count;
	int		m_count;
	t_reqs	reqs;
}	t_map;

//Player
typedef struct s_player {
	int		x;
	int		y;
}	t_player;

//Meta
typedef struct s_meta {
	void	*mlx;
	void	*mlx_win;
	int		img_w;
	int		img_h;
	int		win_w;
	int		win_h;
}	t_meta;

//Sprites
typedef struct s_xpm {
	void	*empty;
	void	*wall;
	void	*collectiblle;
	void	*exit;
	void	*player;
	void	*enemy;
}	t_xpm;

typedef struct s_cosas {
	t_args		args;
	t_map		map;
	t_player	p;
	t_xpm		xpm;
	t_meta		meta;
	t_data		img;
	int			fd;
	int			moves_count;
}	t_cosas;

typedef struct s_point
{
	int			x;
	int			y;
}				t_point;

#endif
