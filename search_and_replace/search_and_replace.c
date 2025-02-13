/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:38:52 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 18:06:40 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


int	main(int argc, char **argv)
{
	if(argc != 4)
		return (0);
	if(argc[2][1] != '\0' || argc[3][1] != '\0')
	{
		return ('\n');
	}
	return (0);

	if(argv[1][i] == argv[2][0])
	{
		argv[1][i] = argv[3][0];
		write(1, argv[1][0], 1);
		i++;
	}
	write(1, '\n', 1);
}
