#include <stdio.h>
#include "sl_list.h"

struct Element
{
    int pid;
    Element *next;
};

struct Element elements[1000];

struct Element *unused_elements = NULL;

void element_delete(struct Element *elem)
{
    if (elem != NULL)
        free(elem);
}

void list_init(struct List *list)
{
    list->fist = NULL;
}

void list_delete(struct List *list)
{
    while (list->first != NULL)
    {
        struct Element *elem = list->first;
        list->first = elem->next;
        element_delete(elem);
    }
}

void list_append(struct List *list, struct Element *elem)
{
    struct Element *iterator = list->first;

    if (iterator == NULL)
    {
        list->first = elem;
        return;
    }
    while (iterator->next != NULL)
    {
        iterator = iterator->next;
    }
    iterator->next = elem;
}

void list_insert(struct List *list, struct Element *elem)
{
    if (list->first == NULL)
    {
        list->first = elem;
        return;
    }

    struct Element *iterator = list->first;
    if (iterator->start > elem->start)
    {
        elem->next = iterator;
        list->first = elem;
        return;
    }

    while (iterator->next != NULL)
    {
        if (iterator->next->pid > elem->pid)
        {
            elem->next = iterator->next;
            iterator->next = elem;
            return;
        }
        iterator = iterator->next;
    }
    iterator->next = elem;
}
}