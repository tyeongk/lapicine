/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:30 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/13 16:16:43 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	inter(char *str1, char *str2)
{
	int	ascii[256] = {0};
	int	i;
	
	i = 0;
	while(str2[i])
	{
		if(ascii[(int)str2[i]] == 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	while(str1[i])
	{
		if(ascii[(int)str1[i]] == 1)
			ascii[(int)str1[i]] = 2;
		write(1, str1[i], 1);
		i++;
	}
}	

int	main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write(1, '\n', 1);
	return (0);
}
