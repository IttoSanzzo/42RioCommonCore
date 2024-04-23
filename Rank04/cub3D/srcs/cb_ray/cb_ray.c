/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_ray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:21 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 23:34:38 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

static void cb_horir_find(t_ray *ray, t_inf *inf)
{
	inf->disth = DS_DEF;
	inf->hx = ray->pvx;
	inf->hy = ray->pvy;
	while (inf->dof < 8)
	{
		inf->mx = (int)(inf->rx) >> 6;
		inf->my = (int)(inf->ry) >> 6;
		inf->mp = inf->my * ray->mlx + inf->mx;
		if ((inf->mp >= 0 && inf->mp < ray->mlt - 1)
			&& inf->mp < ray->mlt && ray->umap[inf->mp] != 0)
		{
			inf->hx = inf->rx;
			inf->hy = inf->ry;
			inf->disth = cb_dist(ray->pvx, ray->pvy, inf->hx, inf->hy);
			inf->dof = 8;
		}
		else
		{
			inf->rx += inf->xo;
			inf->ry += inf->yo;
			inf->dof += 1;
		}
	}
}

 void	cb_hori_ray(t_data *data, t_ray *ray, t_inf *inf)
{
	(void)data;
	inf->dof = 0;
	inf->atan = -1 / tan(inf->ra);
	if (inf->ra == 0 || inf->ra == PI)
	{
		inf->rx = ray->pvx;
		inf->ry = ray->pvy;
		inf->dof = 8;
	}
	if (inf->ra > PI)
	{
		inf->ry = ((((int)ray->pvy >> 6) << 6) - 0.0001);
		inf->rx = (ray->pvy - inf->ry) * inf->atan + ray->pvx;
		inf->yo = -MAP_S;
		inf->xo = -inf->yo * inf->atan;
	}
	if (inf->ra < PI)
	{
		inf->ry = ((((int)ray->pvy >> 6) << 6) + MAP_S);
		inf->rx = (ray->pvy - inf->ry) * inf->atan + ray->pvx;
		inf->yo = MAP_S;
		inf->xo = -inf->yo * inf->atan;
	}
	cb_horir_find(ray, inf);
}

static void cb_vertr_find(t_ray *ray, t_inf *inf)
{
	inf->distv = DS_DEF;
	inf->vx = ray->pvx;
	inf->vy = ray->pvy;
	while (inf->dof < 8)
	{
		inf->mx = (int)(inf->rx) >> 6;
		inf->my = (int)(inf->ry) >> 6;
		inf->mp = inf->my * ray->mlx + inf->mx;
		if ((inf->mp >= 0 && inf->mp < ray->mlt - 1)
			&& inf->mp < ray->mlt && ray->umap[inf->mp] != 0)
		{
			inf->vx = inf->rx;
			inf->vy = inf->ry;
			inf->distv = cb_dist(ray->pvx, ray->pvy, inf->vx, inf->vy);
			inf->dof = 8;
		}
		else
		{
			inf->rx += inf->xo;
			inf->ry += inf->yo;
			inf->dof += 1;
		}
	}
}

void	cb_vert_ray(t_data *data, t_ray *ray, t_inf *inf)
{
	(void)data;
	inf->dof = 0;
	inf->ntan = -tan(inf->ra);
	if (inf->ra == PL || inf->ra == PR)
	{
		inf->rx = ray->pvx;
		inf->ry = ray->pvy;
		inf->dof = 8;
	}
	if (inf->ra > PL && inf->ra < PR)
	{
		inf->rx = ((((int)ray->pvx >> 6) << 6) - 0.0001);
		inf->ry = (ray->pvx - inf->rx) * inf->ntan + ray->pvy;
		inf->xo = -MAP_S;
		inf->yo = -inf->xo * inf->ntan;
	}
	if (inf->ra < PL || inf->ra > PR)
	{
		inf->rx = ((((int)ray->pvx >> 6) << 6) + MAP_S);
		inf->ry = (ray->pvx - inf->rx) * inf->ntan + ray->pvy;
		inf->xo = MAP_S;
		inf->yo = -inf->xo * inf->ntan;
	}
	cb_vertr_find(ray, inf);
}

void	cb_calc_rays(t_data *data)
{
	data->ray.inf.ra = data->ray.pva - DR * (RAYS / 2);
	if (data->ray.inf.ra < 0)
		data->ray.inf.ra += 2 * PI;
	if (data->ray.inf.ra > 2 * PI)
		data->ray.inf.ra -= 2 * PI;
	data->ray.inf.r = -1;
	while (++data->ray.inf.r < RAYS)
	{
		cb_hori_ray(data, &data->ray, &data->ray.inf);
		cb_vert_ray(data, &data->ray, &data->ray.inf);
		if (data->ray.inf.disth < data->ray.inf.distv)
		{
			data->ray.inf.dist = data->ray.inf.disth;
			data->ray.inf.rx = data->ray.inf.hx;
			data->ray.inf.ry = data->ray.inf.hy;
		}
		else
			data->ray.inf.dist = data->ray.inf.distv;
		cbd_sline(cb_rgb(255, 0, 0), 2, (int[2]){data->ray.pvx, data->ray.pvy},
		(int[2]){data->ray.inf.rx, data->ray.inf.ry});
		cb_walls(data, &data->ray, &data->ray.inf);
		data->ray.inf.ra += DR;
		if (data->ray.inf.ra < 0)
			data->ray.inf.ra += 2 * PI;
		if (data->ray.inf.ra > 2 * PI)
			data->ray.inf.ra -= 2 * PI;
	}
}
