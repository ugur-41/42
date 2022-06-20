/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:43 by udemirel          #+#    #+#             */
/*   Updated: 2022/05/30 13:13:45 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_data
{
	void 	*img;
	char 	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int 	height;
	int 	width;
}				t_data;

typedef	struct s_map
{
	int		height;
	int		width;
	char	**map;
}			   t_map;


void				my_mlx_pixel_put(t_data *data, int x, int y, int color);
void				ft_map_feat(char **str, t_map *maps);
unsigned int		ft_strlen(char *str);

char				*ft_strjoin(char *left_str, char *buff);
char				*ft_get_next_line(int fd);

int		ft_strchr(char *str, char chr);



#endif