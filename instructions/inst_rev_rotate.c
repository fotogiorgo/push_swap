/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:35:26 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/15 15:10:07 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//what do we use as a terminating char?
void    rev_rotate_a(t_v_stacks *stacks)
{
    lower_stack(stacks->a, stacks->a_size);
    stacks->a[0] = stacks->a[stacks->a_size];
    stacks->a[stacks->a_size] = 0;
    write(1, "rra\n", 4);
}

void    rev_rotate_b(t_v_stacks *stacks)
{
    lower_stack(stacks->b, stacks->b_size);
    stacks->b[0] = stacks->b[stacks->b_size - 1];
    stacks->b[stacks->b_size] = 0;
    write(1, "rrb\n", 4);
}

void    rrr(t_v_stacks *stacks)
{
    rev_rotate_a(stacks);
    rev_rotate_b(stacks);
    write(1, "rrr\n", 4);
}