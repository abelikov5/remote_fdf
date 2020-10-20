/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:23:35 by rmarni            #+#    #+#             */
/*   Updated: 2019/09/24 13:29:16 by rmarni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t num)
{
	size_t i;

	i = 0;
	while (i < num)
	{
		((unsigned char *)dest)[i] = '\0';
		i++;
	}
}
