/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:18:44 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/14 15:39:49 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#define BUFFER_SIZE 1000

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
#include <fcntl.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void*));

#endif