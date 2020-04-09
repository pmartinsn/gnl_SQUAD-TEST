/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.42sp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:16:08 by pmartins          #+#    #+#             */
/*   Updated: 2020/04/09 14:53:57 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <ctype.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#include "Put.C-H-InHere/get_next_line.h"

int				get_next_line(int fd, char **line);
int main()
{
    int     fd;
    char    *line;
    int     result;
	int		i;

printf("\033[1;36m\n** TEST 3 : COUNT LINES ***\n\033[0m");
	fd = open("heroe.txt", O_RDONLY);
	i = 1;
	result = 1;
	while (((result = get_next_line(fd, &line)) > 0))
	{
		//printf("%s\n", line);
		i++;
	}
	//printf("%d\n", i);
	free(line);
	close(fd);
	if (result == -1)
				printf ("\nError - Returned -1\n");
		else if (i == 31)
			printf("\033[1;32m\n[OKAY]\n\033[0m");
		else if (i != 31)
			printf("\033[0;31m\n[KO]\n\033[0m");
printf("\033[1;33m\n** TEST 4 : LARGE LINE LINES *********\n\033[0m");
	fd = open("test3.txt", O_RDONLY);
	i = 1;
	result = 1;
	while (((result = get_next_line(fd, &line)) > 0))
	{
		i++;
	}//printf("%d\n", i);
	free(line);
	close(fd);
	if (result == -1)
				printf ("\nError - Returned -1\n");
		else if (i == 3)
			printf("\033[1;32m\n[OKAY]\n\033[0m");
		else if (i != 3)
			printf("\033[0;31m\n[KO]\n\033[0m");
	printf("\033[0;0m\n** TEST 5 : NO FILE *********\n\033[0m");
	fd = open("test3", O_RDONLY);
	i = 1;
	result = 1;
	while (((result = get_next_line(fd, &line)) > 0))
	{
		i++;
	}
	close(fd);
	if (result == -1)
				printf ("\033[1;32m\n[OKAY]\n\033[0m");
		else if (i != -1)
			printf("\033[0;31m\n[KO]\n\033[0m");
	return(0);
}