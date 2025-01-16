/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:56:06 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/01/16 17:22:05 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"  //n esquecer

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current_node;  //guarda o nodo atual
	
	if (begin_list == NULL || *begin_list == NULL)  //tratativa de erro
		return ;
	current_node = *begin_list;  //aponta pro começo da lista
	if (cmp(current_node->data, data_ref) == 0)  // compara 'current_node' com 'data_ref'  se der "match"
	{
		*begin_list = current_node->next;  //avança pro proximo nodo
		free(current_node);  //remove o nodo
		ft_list_remove_if(begin_list, data_ref, cmp);  //recursivo
	}
	else  // se der "match"      tem q ter o else p moulinette !!!
	{
		current_node = *begin_list;
		ft_list_remove_if(&current_node->next, data_ref, cmp);  //só avança pro próx. nodo
	}
}


/*
	tratativa de erro;  declara 't_list';  aponta pro começo da lista;
	um if e um else;  no if, compara o atual com 'data';  remove o nodo;
	no else, só avança pro proximo nodo
*/

/*Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.
It will be declared as follows :
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
cmp takes two void* and returns 0 when both parameters are equal.
You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>*/