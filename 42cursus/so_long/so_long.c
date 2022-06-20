/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:32:40 by udemirel          #+#    #+#             */
/*   Updated: 2022/06/02 15:07:54 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"
#include "minilibx/mlx.h"
#include <stdio.h>


int main()
{
	

	void	*mlx;
	void	*mlx_win;
	t_map	map;
	t_data	rsm;
	int		fd;
	int		i;

	i = 0;
	fd = open("map.ber", O_RDONLY);
	map.map = ft_get_next_line(fd);
	ft_map_feat(map.map, &map);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, map.width * 64, map.height * 64, "so_long");
	rsm.img = mlx_xpm_file_to_image(mlx, "./wall.xpm", &rsm.height, &rsm.width);
	while (map.map)
	mlx_put_image_to_window(mlx, mlx_win, rsm.img, 0, 0);
	mlx_loop(mlx);
}
