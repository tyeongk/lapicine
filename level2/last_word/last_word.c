/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:51:47 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/13 17:55:27 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	if(c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		while(*av[1])
			av[1]++;
		av[1]++;
		while(ft_isblank(*av[1]))
			av[1]--;
		while(*av[1] && !ft_isblank(*av[1]))
			av[1]--;
		av[1]++;
		while(*av[1] && !ft_isblank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, '\n', 1);
	return (0);
}

