/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havi <havi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:56:09 by havi              #+#    #+#             */
/*   Updated: 2019/06/18 16:03:38 by havi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		write(1, &s[i], 1);
		i++;
	}
}