/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:12:16 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 18:44:18 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char	result;
	
	if(ac < 2)
		write(1, '\n', 1);
	
	while(argv[i])
	{
		if(*argv[i][0] >= 65 && *argv[i][0] <= 90)
		{
			result = argv[i][0] - 32
			write(1, result, 1);
		}
		else if(*argv[i][0] >= 97 && *argv[i][0] <= 122)
		{
			result = argv[i][0] + 32;
			write(1, result, 1);
		}
		write(1, '\n', 1);
		i++;
	}
	return (0);
}




