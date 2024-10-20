/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciendacunha <luciendacunha@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:35:36 by luciendacun       #+#    #+#             */
/*   Updated: 2024/10/20 14:04:05 by luciendacun      ###   ########.fr       */
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
	char *str = "tata";
	printf("%d", ft_strlen(str));
	return 0;	
}