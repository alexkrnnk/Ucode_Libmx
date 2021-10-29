#include "libmx.h"

void mx_push_back(t_list **list, void *data){
    if(!data) return;  
    
    t_list *back = mx_create_node(data);
    t_list *tmp = NULL;

    if (*list == NULL || list == NULL)
        *list = back;
    else
        tmp = *list;

    while(tmp->next != NULL)
        tmp = tmp->next;


    tmp->next = back;
}

