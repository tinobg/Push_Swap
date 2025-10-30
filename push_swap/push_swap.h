/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:03:29 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/07 17:37:50 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack {
	int				nbr;
	int				i;
	struct s_stack	*n;
}		t_stack;

// main functions
int		bigcheck(int ac, char ***av);
int		argvsize(int ac, char **av);
void	fill_stack(t_stack **stack_a, int ac, char **av);
int		main(int ac, char **av);

// lst functions
t_stack	*ft_newlst(int content);
t_stack	*ft_lastlst(t_stack *lst);
int		ft_sizelst(t_stack *lst);
void	ft_addbacklst(t_stack **lst, t_stack *new);
void	ft_clearlst(t_stack **stack);
void	ft_addfrontlst(t_stack **lst, t_stack *new);

// operations functions
void	swap(t_stack **stack);
void	push(t_stack **stack_src, t_stack **stack_dest);
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);

// instructions functions
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);

// sort functions
void	three_elements_sort(t_stack **stack_a);
void	four_elements_sort(t_stack **stack_a, t_stack **stack_b);
void	five_elements_sort(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);

// checking functions
int		checksort(t_stack **stack);
int		emptycheck(t_stack **stack);
int		checkdouble(char **av, int nb, int i);
int		checknumber(char *str);
int		bigcheck(int ac, char ***av);

// utils
t_stack	*gnm(t_stack **stack_a);
int		intmax(char *str);
void	freeargv(char **av);

#endif
