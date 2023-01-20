//
// Created by nulln on 1/17/2023.
//
#include "my_list.h"

TYPE pop_front(m_list **head) {
    if ((*head) == NULL) {
        return HEAD_IS_NULL;
    }
    m_list *tmp;
    TYPE res;
    tmp = (*head);
    (*head) = (*head)->node;
    res = tmp->value;
    free(tmp);
    return res;
}

TYPE pop_back(m_list **head) {
    TYPE res;
    if ((*head) == NULL) {
        return HEAD_IS_NULL;
    } else if((*head)->node == NULL) {
        res = (*head)->value;
        free((*head));
        return res;
    }
    m_list *lst, *tmp = (*head);
    while (tmp->node != NULL) {
        lst = tmp;
        tmp = tmp->node;
    }
    res = tmp->value;
    lst->node = NULL;
    free((tmp));
    return res;
}