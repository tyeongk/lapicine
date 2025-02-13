/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:02:35 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/13 11:31:18 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(*s)
{
	while(*s)
                {
                        if((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
				putchar(*s + 1);
                        else if (*s == 'z' || *s == 'Z')
				putchar(*s - 25);
                        else
                                putchar(*s);
                        ++s;

}

int	rotone(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
		rotone(av[1][i]);
	putchar('\n');
	return (0);
}
