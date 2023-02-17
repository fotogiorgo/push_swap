/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:35:26 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/15 15:09:34 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotate_a(t_v_stacks *stacks)
{
    int temp;

    temp = stacks->a[0];
    lift_stack(stacks->a, stacks->a_size);
    stacks->a[stacks->a_size - 1] = temp;
    write(1, "ra\n", 3);
}

void    rotate_b(t_v_stacks *stacks)
{
    int temp;

    temp = stacks->b[0];
    lift_stack(stacks->b, stacks->b_size);
    stacks->b[stacks->b_size - 1] = temp;
    write(1, "rb\n", 3);
}

void    rr(t_v_stacks *stacks)
{
    rotate_a(stacks);
    rotate_b(stacks);
    write(1, "rr\n", 3);
}