/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:53:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/16 15:01:15 by psegura-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_perror(char *str)
{
	perror(str);
	exit(0);
}

void	ft_print_error(char *str)
{
	printf("Error\n%s\n", str);
	exit(0);
}
