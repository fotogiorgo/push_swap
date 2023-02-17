/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto < jofoto@student.hive.fi >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:31:14 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/17 12:35:34 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <strings.h>
#include <stdio.h>

int find_smallest_idx(t_v_stacks s_stacks)
{
    int smallest = s_stacks.a[0];
    int index;
    int i = 1;
    
    index = 0;
    while (s_stacks.a_size > i)
    {
        if (s_stacks.a[i] < smallest)
        {
            smallest = s_stacks.a[i];
            index = i;
        }
        i++;
    }
    return (index);
}
/*
void algo(t_v_stacks *stacks)
{
    int smallet_idx;
    while(stacks->a_size > 0)
    {
        
    }
}*/



int main(void)
{
    t_v_stacks stacks;
    
    stacks.a = malloc(sizeof(int) * 7);
    //bzero(stacks.a, sizeof(int) * 6);
    stacks.b = malloc(sizeof(int) * 7);
    //bzero(stacks.b, sizeof(int) * 6);
    stacks.a_size = 6;
    stacks.b_size = 0;
    stacks.a[0] = 2;
    stacks.a[1] = 1;
    stacks.a[2] = 3;
    stacks.a[3] = 6;
    stacks.a[4] = 5;
    stacks.a[5] = 8;
    //stacks.a[6] = 6;
    //stacks.a[7] = 7;
    //stacks.a[8] = 9;
    
    //start_solving(&stacks);
    //push_b(&stacks);
    //push_b(&stacks);
    //swap_b(&stacks);
    //push_b(&stacks);
    //push_b(&stacks);
    //push_b(&stacks);
    //push_b(&stacks);
    //push_b(&stacks);
    //printf("index: %i\n", find_smallest_idx(stacks));
    
    start_solving(&stacks);
    for (int i = 0; i < stacks.a_size; i++)
       printf("%i | %i\n", stacks.a[i], stacks.b[i]);
}