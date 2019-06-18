/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havi <havi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:58:42 by havi              #+#    #+#             */
/*   Updated: 2019/06/18 16:16:47 by havi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int	ft_fnputs(const char * __restrict s, FILE * __restrict stream, int n)
 {
	 int i;

	 i = 0;
	 while (i < n)
	 {
		 fputc(s[i], stream);
		 i++;
	 }
	 return (n);
 }