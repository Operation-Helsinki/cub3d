/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:53:48 by psegura-          #+#    #+#             */
/*   Updated: 2023/03/11 17:34:17 by psegura-         ###   ########.fr       */
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

// int	ft_str_is_space(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
// 			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
// 			i++;
// 		else
// 			return (0);
// 	}
// 	return (str[i] == '\0');
// }
