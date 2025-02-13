/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeykang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:14 by taeykang          #+#    #+#             */
/*   Updated: 2025/02/13 14:05:59 by taeykang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
{
	char	*size;
	int	len;

	while(src[len])
		++len;


	size = (char *)malloc(sizeof(char) * (len + 1));
	size[len] = '\0';

	while(len > 0)
	{
		size[len] = src[len];
		--len;
	}
	return (size);
}
