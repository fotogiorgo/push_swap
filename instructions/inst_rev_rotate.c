/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:35:26 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/20 16:53:55 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//what do we use as a terminating char?
void    rev_rotate_a(t_v_stacks *stacks)
{
    lower_stack(stacks->a, stacks->a_curr);
    stacks->a[0] = stacks->a[stacks->a_curr];
    stacks->a[stacks->a_curr] = 0;
    write(1, "rra\n", 4);
}

void    rev_rotate_b(t_v_stacks *stacks)
{
    lower_stack(stacks->b, stacks->b_curr);
    stacks->b[0] = stacks->b[stacks->b_curr - 1];
    stacks->b[stacks->b_curr] = 0;
    write(1, "rrb\n", 4);
}

void    rrr(t_v_stacks *stacks)
{
    rev_rotate_a(stacks);
    rev_rotate_b(stacks);
    write(1, "rrr\n", 4);
}