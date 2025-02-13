/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:11:16 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 21:08:43 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int	i)
{
	if(i > 9)
		ft_write(i / 10);
	write(1,"0123456789"[i % 10], 1)

int	main(void)
{
	i = 1;
	if(i < 0)
		return (0);
	while(i <= 100)
	{
		if(i % 3 == 0)
			write(1,"fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_write_num(i);
		write(1, "\n", 1);
		i++;
	}
}	
