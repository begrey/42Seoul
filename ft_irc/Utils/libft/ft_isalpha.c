/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyyo <hyungyyo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 16:02:31 by hyungyyo          #+#    #+#             */
/*   Updated: 2020/12/21 16:05:13 by hyungyyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (((char)c >= 'a' && (char)c <= 'z') ||
	((char)c >= 'A' && (char)c <= 'Z'))
		return (1);
	return (0);
}
