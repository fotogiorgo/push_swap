/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:31:07 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/26 14:08:54 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_stacks
{
    int *a;
    int a_curr;
    int a_cap;
    int *b;
    int b_curr;
//    int b_cap;
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
/*init*/
void    init_stacks(t_v_stacks *stacks, int argc, char **argv);