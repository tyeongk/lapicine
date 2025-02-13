/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:50:45 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 19:16:53 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc < 2)
		write(1,"\n", 1);
	while(*argc[i])
	{
		
		if(*argv[i][0] >= 'A' && *argv[i][0] <= 'M')
		{
			argv[i][0] = argv[i][0] + 13;
			write(1, argv[i][0], 1);
		}
		else if(*argv[i][0] >= 'a' && *argv[i][0] <= 'm')
		{
			argv[i][0] = argv[i][0] + 13;
			write(1, argv[i][0], 1);
		}
		else if(*argv[i][0] >= 'N' && *argv[i][0] <= 'Z')
                {
                        argv[i][0] = argv[i][0] - 13;
                        write(1, argv[i][0], 1);
                }
		else if(*argv[i][0] >= 'n' && *argv[i][0] <= 'z')
                {
                        argv[i][0] = argv[i][0] - 13;
                        write(1, argv[i][0], 1);
                }
	}
	write(1, '\n', 1);
	return (0);
}

