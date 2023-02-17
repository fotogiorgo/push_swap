/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:19:34 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/17 12:34:08 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

void    modify_a(t_v_stacks *stacks, int mode)
{
    //if (stacks->b[0] > stacks->a[stacks->a_size - 1])
    //    push_b(stacks);
    if (stacks->a[0] > stacks->a[1])
        swap_a(stacks);
    else if (stacks->a[0] > stacks->a[stacks->a_size - 1])
        rev_rotate_a(stacks);
    else if(mode == 1)
        push_b(stacks);
}


void    modify_b(t_v_stacks *stacks, int mode)
{
    if (stacks->b[0] < stacks->b[stacks->b_size - 1])
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

// mode, p(1) = push(to b) and r(0) = reverse
void    start_solving(t_v_stacks *stacks)
{
    int mode;

    mode = 1;
    while (!stack_sorted(stacks->a, stacks->a_size) || stacks->b_size != 0)
    {
        if (stack_sorted(stacks->a, stacks->a_size))
            mode = 0;
        else if (mode == 0 && stacks->b_size == 0)
            mode = 1;
        if (stacks->a_size > 1)
            modify_a(stacks, mode);
        if (stacks->b_size > 0)
            modify_b(stacks, mode);
        
        //printf("%i | %i\n_ | _\n", stacks->a_size, stacks->b_size);
        //for (int i = 0; i < 5; i++)
        //    printf("%i | %i\n", stacks->a[i], stacks->b[i]);
        //printf("stack_sorted: %i\n", stack_sorted(stacks->a, stacks->a_size));
        //printf("\n\n");
        //sleep(2);
    }
}