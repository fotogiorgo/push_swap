/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:31:18 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/15 15:08:42 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_a(t_v_stacks *stacks)
{
    if (stacks->a_size > 1)
        swap_top(stacks->a);
    write(1, "sa\n", 3);
}

void    swap_b(t_v_stacks *stacks)
{
    if (stacks->b_size > 1)
        swap_top(stacks->b);
    //write(1, "sb\n", 3);
}

void    ss(t_v_stacks *stacks)
{
    swap_a(stacks);
    swap_b(stacks);
    write(1, "ss\n", 3);
}

void    push_a(t_v_stacks *stacks)
{
    if (stacks->b_size > 0)
    {
        lower_stack(stacks->a, stacks->a_size);
        stacks->a_size++;
        stacks->a[0] = stacks->b[0];
        lift_stack(stacks->b, stacks->b_size);
        stacks->b_size--;
    }
    write(1, "pa\n", 3);
}

void    push_b(t_v_stacks *stacks)
{
    if (stacks->a_size > 0)
    {
        lower_stack(stacks->b, stacks->b_size);
        stacks->b_size++;
        stacks->b[0] = stacks->a[0];
        lift_stack(stacks->a, stacks->a_size);
        stacks->a_size--;
    }
    write(1, "pb\n", 3);
}