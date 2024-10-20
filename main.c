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

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_putchar(char c)
{
        write(0, &c,1);
}

void aff_map(char map[5][5])
{
	int x = 0;
	int y = 0;
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
        }
	return;
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
	char m;
	
	x = 0;
	y = 0;
	while(x < 5)
	{
		while( y < 5)
		{
			map[x][y] = '#';
			y++;
		}		
		y = 0;
		x++;
	}
	x = 0;
	//=============================================================//
	while(1){
		map[x][y] = 'o';
		aff_map(map);
		m = getchar();
		switch(m)
		{
			case 'z':
				if(x == 0)
					break;
				else
				{
					map[x][y] = '#';
					x--;
				}
				break;
			case 'q':
				if(y == 0)
					break;
				else
				{
					map[x][y] = '#';
					y--;
				}
				break;
			case 's':
				if(x == 4)
                                        break;
                                else
				{
					map[x][y] = '#';
                                        x++;
				}
                                break;
			case 'd':
				if(y == 4)
                                        break;
                                else
				{
					map[x][y] = '#';
                                        y++;
				}
                                break;

		}
		system("clear");
	}
	return 0;
}
