/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:18:44 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 18:54:00 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 1000

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));
char	*ft_strchr(const char *str, int c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
//strdup
//strlen
// maybe strjoin
//ft_strchr
// ft_substr


#endif