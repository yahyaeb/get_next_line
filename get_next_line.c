/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:19:30 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 18:28:42 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    t_list line;
    char buffer[BUFFER_SIZE];
    int bytes_read;
    char *result;
    static int length = 0;

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if(bytes_read <= 0)
        return NULL;
    result = ft_strchr(buffer, '\n');
    if (!result)
        return NULL;
    // calculates the number of char from the start of buffer.
    length = result - buffer;

    // setting memory for the first node.
    line.content = malloc((length + 1) * sizeof(char));
    if(!line.content)
        return NULL;
    //strncpy first line to line.content
    strncpy((char *)line.content, buffer, length);
    ((char *)line.content)[length] = '\0';
    
    return (char *)line.content;
}

int main(void) {
    int fd = open("test.txt", O_RDONLY);
    char *line = get_next_line(fd);
    if (line) {
        printf("Line read: %s\n", line);
        free(line);  // Free memory after use
    }
    close(fd);
    return 0;
}