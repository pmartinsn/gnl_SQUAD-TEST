/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 09:07:16 by pmartins          #+#    #+#             */
/*   Updated: 2020/04/08 16:33:22 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*free_and_return_null(char *s)
{
	free(s);
	return (NULL);
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int		is_there_line(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int		find_char_index(char *s, char c, char d)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == d)
			return (i);
		i++;
	}
	return (-11);
}