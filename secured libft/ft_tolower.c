/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:34:33 by baboulou          #+#    #+#             */
/*   Updated: 2022/10/07 21:34:33 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	c = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
