/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:28:38 by jormanue          #+#    #+#             */
/*   Updated: 2025/07/03 14:52:55 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	char nb;

	nb = 0;
	while(*str)
	{
		str++;
		nb++;
	}
	return (nb);
}
