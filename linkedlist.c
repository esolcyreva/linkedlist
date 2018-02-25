#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

list_t *head = NULL;

int main()
{
    list_print(&head);
    list_init(&head);
    list_print(&head);
    list_destroy(&head);
    list_print(&head);

    return 0;
}
