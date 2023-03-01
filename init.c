/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:25:19 by jofoto            #+#    #+#             */
/*   Updated: 2023/02/26 14:02:22 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void    init_vector(t_v_stacks *stacks)
{
    stacks->a = (int *)malloc(sizeof(int) * 6);
    if (stacks->a == NULL)
        exit(1); //Check if something has to be freed
    stacks->a_cap = 5;
    stacks->a_curr = 0;
}

/*massive leak here*/
/*t_v_stacks  *realloc_vector(t_v_stacks stacks)
{
    t_v_stacks  *new_stacks;
    
    new_stacks = (t_v_stacks *)malloc(sizeof(t_v_stacks));
    if (new_stacks == 0)
        exit(1); //free stacks
    new_stacks->a_curr = stacks.a_curr;
    new_stacks->a_cap = stacks.a_cap * 2;
    new_stacks->a = (int *)malloc(sizeof(int) * (new_stacks->a_cap + 1));
    if (new_stacks->a == NULL)
        exit(1); //free stacks
    while (stacks.a_cap)
    {
        stacks.a_cap--;
        new_stacks->a[stacks.a_cap] = stacks.a[stacks.a_cap];
    }
    //free(stacks->a);
    //free(stacks);
    return (new_stacks);
}*/

void realloc_vector(t_v_stacks *stacks)
{
    int *new_a;
    int i;
    
    i = 0;
    stacks->a_cap = stacks->a_cap * 2;
    new_a = (int *)malloc(sizeof(int) * (stacks->a_cap + 1));
    if (new_a == NULL)
        exit(1); //free stacks
    while (i < stacks->a_cap)
    {
        new_a[i] = stacks->a[i];
        i++;
    }
    free(stacks->a);
    stacks->a = new_a;
}

void    read_argv(t_v_stacks *stacks, char *arg)
{
    char    **nums;

    nums = ft_split(arg, ' ');
    if (nums == 0)
        exit(1); //free vector
    while(*nums != NULL)
    {
        if (stacks->a_curr == stacks->a_cap)
        {
            realloc_vector(stacks);
        }
        stacks->a[stacks->a_curr] = atoi_int_only(*nums);
        stacks->a_curr++;
        nums++;
    }
    //printf("%i\n", stacks->a_cap);
    //for (int i = 0; i < stacks->a_curr; i++)
    //    printf("%i\n", stacks->a[i]);
    /*free nums*/
}

void    init_stacks(t_v_stacks *stacks, int argc, char **argv)
{
    init_vector(stacks);
    argc--;
    argv++;
    while (argc != 0)
    {
        read_argv(stacks, *argv);
        //printf("stacks.a_curr: %i\n", stacks->a_cap);
        //for (int i = 0; i < stacks->a_curr; i++)
        //    printf("%i\n", stacks->a[i]);
        argv++;
        argc--;
    }
    stacks->b = (int *)malloc(sizeof(int) * (stacks->a_curr + 1));
    if (stacks->b == NULL)
        exit(1); //check if u need to free
    stacks->b_curr = 0;
}