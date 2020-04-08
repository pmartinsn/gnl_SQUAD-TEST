/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl2.42sp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:16:08 by pmartins          #+#    #+#             */
/*   Updated: 2020/04/08 10:21:46 by pmartins         ###   ########.fr       */
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
printf("\033[1;35m\n** TEST 1 : ALPHABET ***********\n\033[0m");
		fd = open("test1.txt", O_RDONLY);
	i = 1;
	result = 0;
	while (((result = get_next_line(fd, &line)) > 0))
	{
		//printf("%s\n", line);
		i++;
	}
	free(line);
	close(fd);
	if (result == -1)
				printf ("\nError - Returned -1\n");
		else if (i == 66)
			printf("\033[1;32m\n[OKAY]\n\033[0m");
		else if (i != 66)
			printf("\033[0;31m\n[KO]\n\033[0m");
printf("\033[1;34m\n** TEST 2 :MULTIPLE EMPITY LINES, TABS AND SPACES **\n\033[0m");
		fd = open("test2.txt", O_RDONLY);
	i = 1;
	result = 0;
	while (((result = get_next_line(fd, &line)) > 0))
	{
		//printf("%s\n", line);
		i++;
	}
	close(fd);
	free(line);
	//printf("%d", i);
	if (result == -1)
				printf ("\nError in Function - Returned -1\n");
		else if (i == 31)
			printf("\033[1;32m\n[OKAY]\n\033[0m");
		else if (i != 31)
			printf("\033[0;31m\n[KO]\n\033[0m");
return (0);
}