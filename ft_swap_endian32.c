/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_endian32.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <hbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 02:43:25 by hbhuiyan          #+#    #+#             */
/*   Updated: 2019/08/30 17:42:45 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t		ft_swap_endian32(uint32_t n)
{
	return ((((n >> 24) & 0x000000ff) | \
			((n >> 8) & 0x0000ff00) | \
			((n << 8) & 0x00ff0000) | \
			((n << 24) & 0xff000000)));
}
