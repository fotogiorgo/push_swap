/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:19:34 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/26 16:32:47 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

void    modify_a(t_v_stacks *stacks, int mode)
{
    //if (stacks->b[0] > stacks->a[stacks->a_curr - 1])
    //    push_b(stacks);
    if (stacks->a[0] > stacks->a[1])
        swap_a(stacks);
    else if (stacks->a[0] > stacks->a[stacks->a_curr - 1])
        rev_rotate_a(stacks);
    else if(mode == 1)
        push_b(stacks);
}


void    modify_b(t_v_stacks *stacks, int mode)
{
    if (stacks->b[0] < stacks->b[stacks->b_curr - 1])
        rotate_b(stacks);
    else if (stacks->b[0] < stacks->b[1])
        swap_b(stacks);
    else if (mode == 0)
        push_a(stacks);
}

int stack_sorted(int *stack, int size)
{
    int i;

    i = 0;
    while(size > i + 1)
    {
        if (stack[i] > stack[i+1])
            return (0);
        i++;
    }
    return (1);
}

int stack_rev_sorted(int *stack, int size)
{
    int i;

    i = 0;
    while(size > i + 1)
    {
        if (stack[i] < stack[i+1])
            return (0);
        i++;
    }
    return (1);
}

// mode, p(1) = push(to b) and r(0) = reverse
void    start_solving(t_v_stacks *stacks)
{
    int mode;

    mode = 1;
    while (!stack_sorted(stacks->a, stacks->a_curr) || stacks->b_curr != 0)
    {
        if (stack_sorted(stacks->a, stacks->a_curr))
            mode = 0;
        else if (mode == 0 && (stacks->b_curr == 0 || (!stack_sorted(stacks->a, stacks->a_curr) && stack_rev_sorted(stacks->b, stacks->b_curr))))
            mode = 1;
        if (stacks->a_curr > 1)
            modify_a(stacks, mode);
        if (stacks->b_curr > 0)
            modify_b(stacks, mode);
        
        //printf("%i | %i\n_ | _\n", stacks->a_curr, stacks->b_curr);
        //for (int i = 0; i < 5; i++)
        //    printf("%i | %i\n", stacks->a[i], stacks->b[i]);
        //printf("stack_sorted: %i\n", stack_sorted(stacks->a, stacks->a_curr));
        //printf("\n\n");
        //sleep(2);
    }
}