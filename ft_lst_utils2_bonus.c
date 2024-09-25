/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils2_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <grannou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 11:00:52 by grannou           #+#    #+#             */
/*   Updated: 2021/12/28 11:01:01 by grannou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*ft_lstlast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_lstsecondtolast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_lst_addback(t_stack **stack, t_stack *element)
{
	if (*stack)
		ft_lstlast(*stack)->next = element;
	else
		*stack = element;
	return (*stack);
}

t_stack	*ft_lst_addfront(t_stack **stack, t_stack *element)
{
	element->next = *stack;
	*stack = element;
	return (*stack);
}
