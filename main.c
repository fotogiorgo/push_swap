/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:03:53 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/26 23:21:19 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_v_stacks  *stacks;

    stacks = (t_v_stacks *)malloc(sizeof(t_v_stacks));
    if (stacks == NULL)
        exit(1);
    
    init_stacks(stacks, argc, argv);
    start_solving(stacks);
    //printf("stacks.a_curr: %i\n", stacks->a_cap);
    //for (int i = 0; i < stacks->a_curr; i++)
    //    printf("%i\n", stacks->a[i]);
}