/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:30 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/13 15:03:31 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	inter(char *str1, char *str2)
{
	int	i;
	int	same;

	i = 0;
	while(*str1 != '\0' || *str2 != '\0')
	{
		if(str1[i] == str2[i])
			same = str1[i];
		ft_putchar(same);
		i++;
		else if(str1[i] != str2[i])
			i++;
	}
	return (0);	
}	

int	main(int ac, char **av)
{
	if(av != 3)
		return (0);

	if(ac == 2)
	{
		inter(,);
	}
	ft_putchar('\n');
}
