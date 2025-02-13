/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:35:26 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 17:32:16 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_repeat(char c)
{
	if(c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		repeat = c - ''a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;

	if(ac ==2)
	{
		while(*argv[i])
		{
			repeat = ft_repeat(*argv[i]);
			while(repeat--)
			{
				write(1, argv[i], 1);
				argv[i]++;
			}
		}
	}
	write(1, '\n', 1);
}
