/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:07:33 by ftaffore          #+#    #+#             */
/*   Updated: 2013/11/28 11:17:16 by ftaffore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			<string.h>
#include			"libft.h"

void				ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
