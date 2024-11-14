/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:19:30 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 16:09:27 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "unistd.h"

char *get_next_line(int fd)
{
    char buffer[BUFFER_SIZE];
    int bytes_read;
    
    while((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        write(1 , buffer, bytes_read);
    }
     if (bytes_read == -1)
        return NULL;
    return NULL;
}

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    get_next_line(fd);
    close(fd);
}