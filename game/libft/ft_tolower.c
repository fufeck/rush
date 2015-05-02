/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftaffore <ftaffore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:31:24 by ftaffore          #+#    #+#             */
/*   Updated: 2013/12/12 10:39:47 by ftaffore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int			ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c + 32);
	return (c);
}
