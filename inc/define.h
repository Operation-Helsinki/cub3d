/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:11:20 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/24 19:08:46 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

//Constantes
# define TRUE 			1
# define FALSE 			0
# define TEXT_COLOR		0xff6e6e
# define NUMBER_COLOR	0xa4ffff
# define MS				1
# define ROT_MS			0.2

//Map char
# define VALID_CHARS		"01NSEW"
# define EMPTY_CHAR			'0'
# define WALL_CHAR			'1'
# define NORTH_CHAR			'E'
# define SOUTH_CHAR			'S'
# define EAST_CHAR			'E'
# define WEST_CHAR			'W'

//Keys
# define ESC	53
# define W		13
# define A		0
# define S		1
# define D		2

# define UP			126
# define LEFT		123
# define DOWN		125
# define RIGHT		124
# define DESTROY 	17

//XPM
# define XPM_SIZE	50
# define EMPTY_PATH			"./sprites/others/suelo50.xpm"
# define WALL_PATH			"./sprites/others/wall50v2.xpm"
# define COLLECTIBLE_PATH	"./sprites/others/fruta50.xpm"
# define EXIT_PATH			"./sprites/others/closed_door.xpm"
# define EXIT_OPEN_PATH		"./sprites/others/open_door.xpm"
# define ENEMIE_PATH		"./sprites/others/buggy50.xpm"
# define PLAYER_PATH		"./sprites/player/luffy_right2.xpm"

//Player
# define PLAYER_UP		"./sprites/player/luffy_up2.xpm"
# define PLAYER_LEFT	"./sprites/player/luffy_left2.xpm"
# define PLAYER_DOWN	"./sprites/player/luffy_down2.xpm"
# define PLAYER_RIGHT	"./sprites/player/luffy_right2.xpm"
#endif
