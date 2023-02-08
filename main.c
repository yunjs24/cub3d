/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:58:10 by junsyun           #+#    #+#             */
/*   Updated: 2023/02/08 10:08:20 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "mlx/mlx.h"

/* keycodes */
#define X_EVENT_KEY_PRESS		2
#define X_EVENT_KEY_REALEASE	3
#define X_EVENT_KEY_EXIT		17

#define KEY_ESC					53
#define KEY_Q					12
#define KEY_W					13
#define KEY_E					14
#define KEY_R					15
#define KEY_A					0
#define KEY_S					1
#define KEY_D					2


/* window size */
#define W_WIDTH					500
#define W_HEIGHT				500
#define W_SUBJECT				"mlx project"
int	main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "mlx_project");
	mlx_loop(mlx);
}

typedef struct s_param {
	/* data */
	int	data;
}	t_param

void	param_init(t_param *param)
{
	/* param*/
	pram->data = 0;
}

int		key_press(int keycode, t_param *param)
{
	static int	a = 0;
	if (keycode == KEY_W)
		param->data++;
	else if (keycode == KEY_S)
		param->data--;
	else if (keycode == KEY_ESC)
		exit(0);
	printf("param->data : %d",n param->data);
}

void	print_manual()
{
	printf("-------------------\n");
	printf("'W key' : do some for data\n");
	printf("'S key' : do some for data\n");
	printf("'ESC key' : Exit this program\n");
	printf("-------------------\n");

	mlx_hook(win, X_EVENT_KEY_PRESS, 0. &key_press, &param);
	mlx_loop(mlx);	

}

int	main(void)
{
	void	*mlx;
	void	*win;
	t_param	param;

	param_init(&param);
	mlx = mlxinit();
	win = mlx_new_window(mlx, W_WIDTH, W_HEIGHT, W_SUBJECT);
}
