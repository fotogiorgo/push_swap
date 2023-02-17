/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:27:37 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/09 19:47:12 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//This function will erase the top of the stack
//what will be the terminating char? --------------------------
void lift_stack(int  *stack, int stack_size)
{
    int i;

    i = 0;
    while (i < stack_size - 1)
    {
        stack[i] = stack[i+1];
        i++;
    }
    stack[i] = 0;
}

//makes one empty space on top (rather a duplicate of the first elem)
//increase stack size after func
void lower_stack(int  *stack, int stack_size)
{
    while(stack_size > 0)
    {
        stack[stack_size] = stack[stack_size - 1];
        stack_size--;
    }
}

void swap_top(int *stack)
{
    int temp;
    
    temp = stack[0];
    stack[0] = stack[1];
    stack[1] = temp;
}
