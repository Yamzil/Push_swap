/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:03:00 by yamzil            #+#    #+#             */
/*   Updated: 2022/03/12 03:26:37 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// t_stack send_to_b(t_stack utils)
// {
//     int i;
//     int l;
//     int j = 0;
//     int pivot_1;
//     int pivot_2;
//     int d;
 
//     if (utils.tail_a <= 100)
//         d = 3;
//     else if (utils.tail_a <= 200)
//         d = 4;
//     else if (utils.tail_a <= 300)
//         d = 5;
//     else if (utils.tail_a <= 400)
//         d = 6;
//     else
//         d = 7;
//     i = utils.tail_a / d;
//     l = i / 2;
//     pivot_1 = utils.tmp_stack[i];
//     pivot_2 = utils.tmp_stack[l];
//     i = utils.tail_a;
//     while (j <= utils.tail_a)
//     {
//         if (utils.stack_a[j] <= pivot_1)
//         {
//             if (j <= (utils.tail_a / 2))
//             {
//                 while (j--) j = 0
//                      utils = ra(utils);
//                 if (utils.stack_a[j] >= pivot_2 || utils.top_b == utils.tail_a)
//                     utils = pb(utils);
//                 else
//                 {
//                     utils = pb(utils);
//                     utils = rb(utils);
//                 }
//              }
//             else
//             {
//                 while (j++ <= utils.tail_a)
//                     utils = rra(utils);
//                 if (utils.stack_a[0] >= pivot_2 || utils.top_b == utils.tail_a)
//                     utils = pb(utils);
//                 else
//                 {
//                     utils = pb(utils);
//                     utils = rb(utils);
//                 }
//             }
//             j = -1;  
//         }
//         j++;
//     }
//     return (utils);
// }