/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:10:28 by ahentton          #+#    #+#             */
/*   Updated: 2024/07/19 14:12:40 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <fcntl.h>

int main(void)
{
    char	*line;
    int fd1=open("bible.txt", O_RDONLY);
    int fd2=open("longline_no_nl.txt", O_RDONLY);
    int	fd3=open("5xnl.txt", O_RDONLY);
    int	fd4=open("1char.txt", O_RDONLY);
    int	fd5=open("1char_nl.txt", O_RDONLY);

    while (1)
    {
        line = get_next_line(fd1);      
        if (line == NULL)
            break;
        printf("[BIBLE]:%s", line);
        line = get_next_line(fd2);
        if (line != NULL)
        	printf ("[LONGLINE_NO_NL]:%s", line);
	line = get_next_line(fd3);
	if (line != NULL)
		printf ("[5XNL]: %s", line);
	line = get_next_line(fd4);
	if (line != NULL)
		printf ("[1CHAR]: %s", line);
	line = get_next_line(fd5);
	if (line != NULL)
		printf ("[1CHAR_NL]: %s", line);
    }
}
