/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <hbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:18:56 by hbhuiyan          #+#    #+#             */
/*   Updated: 2019/06/14 18:19:52 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *add_dot(char *num, size_t prcsn)
{
    char *ret;
    size_t l;
	size_t i;

	i = 0;
    l = ft_strlen(num);
    ret = ft_strnew(l + 1);
    while (i < (l - prcsn))
	{
		ret[i] = num[i];
		i++;
	}
	ret[i++] = '.';
    while (prcsn > 0)
    {
        ret[i++] = num[l - prcsn];
        prcsn--;
    }
	ret[i] = '\0';
	free(num);
    return (ret);
}


char        *ft_ftoa(long double n, size_t prcsn)
{
    char *num;
    size_t i;

    i = 0;
    while (i++ < prcsn)
        n *= 10;
    if (n < 0)
        n -= .5;
    else
        n += .5;
    num = ft_itoa((intmax_t) n);
    num = add_dot(num, prcsn);
    return (num);
}