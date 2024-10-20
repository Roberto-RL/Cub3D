/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:57:37 by rrimonte          #+#    #+#             */
/*   Updated: 2024/10/20 11:57:39 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/cub3d.h"
/*
void	draw_minimap(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map->map_tab[i])
	{
		j = 0;
		while (map->map_tab[i][j])
		{
			if (map->map_tab[i][j] == '1')
				draw_case(map, j * 7, i * 7, 0x000000);
			else if (map->map_tab[i][j] == '0')
				draw_case(map, j * 7, i * 7, create_trgb(0, map->rgb_sky[0],
						map->rgb_sky[1], map->rgb_sky[2]));
			else if (is_valid_char(map->map_tab[i][j], "NSEW"))
				draw_case(map, j * 7, i * 7, 0xEEEE20);
			else
				draw_case(map, j * 7, i * 7, 0x050505);
			j++;
		}
		i++;
	}
}*/
/*
void	actualise_minimap(t_map *map, int old_x, int old_y)
{
	draw_case(map, (int)map->pos_x * 7, (int)map->pos_y * 7, 0xEEEE20);
	if ((int)map->pos_x != old_x)
		draw_case(map, old_x * 7, old_y * 7,
			create_trgb(0, map->rgb_sky[0], map->rgb_sky[1], map->rgb_sky[2]));
	if ((int)map->pos_y != old_y)
		draw_case(map, old_x * 7, old_y * 7,
			create_trgb(0, map->rgb_sky[0], map->rgb_sky[1], map->rgb_sky[2]));
}
*/
/*
void	minimap_pix_put(t_map *map, int x, int y, int color)
{
	char	*pixel;

	if (y < 0 || y > map->display_height - 1 || x < 0
		|| x > map->display_width - 1)
		return ;
	pixel = (map->minimap.addr + (y * map->minimap.line_len
				+ x * (map->minimap.bpp / 8)));
	*(int *)pixel = color;
}*/
/*
void	draw_case(t_map *map, int x, int y, int color)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 7)
	{
		j = 0;
		while (j < 7)
		{
			minimap_pix_put(map, x + j, y + i, color);
			j++;
		}
		i++;
	}
}
*/