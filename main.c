/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:35:36 by luciendacun       #+#    #+#             */
/*   Updated: 2024/10/20 15:21:19 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void ft_putchar(char c)
{
	write(0, &c,1);
}

int	ft_strlen(char* str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}


int main(int argc, char **argv)
{
	char map[5][5];
	int x;
	int y;
	
	x = 0;
	y = 0;
	while(x <= 4)
	{
		while( y <= 4)
		{
			map[x][y] = '#';
			y++;
		}		
		y = 0;
		x++;
	}
	//=============================================================//
	x = getchar();
	map[x][1] = '1';
	x = 0;
	while(x <= 4)
	{
		while( y <= 4)
		{
			ft_putchar(map[x][y]);
			y++;
		}
		ft_putchar('\n');
		y = 0;
		x++;
		x = 0;
	}


	return 0;	
}