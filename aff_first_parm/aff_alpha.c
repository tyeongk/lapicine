/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_alpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:39:33 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/12 12:53:03 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char **argv)
{
	if(ac > 1)
	{
		while(*argv)
		{
			write(1, av[1]++, 1);
		}
	write(1, "\n", 1);
	return (0);
}// 단순하게, argㅍ의 1번째 출력지시
