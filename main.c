/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:35:36 by luciendacun       #+#    #+#             */
/*   Updated: 2024/10/20 13:56:32 by luciendacun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

void ft_putchar(char c)
{
	write(0, &c,1);
}

int	ft_strlen(char* str)
{
	int i;
	i = 0;
	if(str[i] != 0)
		i++;
	retrun(i);
}

int main(int argc, char **argv)
{
	char str[] = ""
	printf('');
	return 0;	
}