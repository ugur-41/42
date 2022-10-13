/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udemirel <udemirel@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:22:14 by udemirel          #+#    #+#             */
/*   Updated: 2022/10/13 12:29:38 by udemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				index;
	int				data;
	struct s_list	*next;
}				t_list;

t_list	*arg_to_list(int ac, char **av);
t_list	*arg_to_stack(char **str ,int amount);

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);

int		ft_count_word(char *s, char c);
int		ft_strlen(char *s);
int		ft_atoi(char *str);

char	**ft_split(char *s, char c);

char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, int len);


void	ft_arg_union(int ac, char **av);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstadd_front(t_list **list, t_list *new);

#endif
