/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:31:07 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/13 16:39:06 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

typedef struct  s_stacks
{
    int *a;
    int a_size;
    int *b;
    int b_size;
}               t_v_stacks;

/*INSTRUCTIONS*/
void    rrr(t_v_stacks *stacks);
void    rev_rotate_b(t_v_stacks *stacks);
void    rev_rotate_a(t_v_stacks *stacks);
void    rr(t_v_stacks *stacks);
void    rotate_b(t_v_stacks *stacks);
void    rotate_a(t_v_stacks *stacks);
void    swap_a(t_v_stacks *stacks);
void    swap_b(t_v_stacks *stacks);
void    ss(t_v_stacks *stacks);
void    push_a(t_v_stacks *stacks);
void    push_b(t_v_stacks *stacks);
//HELPERS
void lift_stack(int  *stack, int stack_size);
void lower_stack(int  *stack, int stack_size);
void swap_top(int *stack);
/*ALGORITHM*/
void    start_solving(t_v_stacks *stacks);