#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

list_t *head = NULL;

int main()
{
    printf("\n***********************************************\n");
    printf("REFERENCE Linked List\n");
    list_init(&head);
    list_print(&head);
    list_destroy(&head);
    printf("**********************************************\n");
    printf("Iterative Reverse Linked List\n");
    list_init(&head);
    iterative_reverse(&head);
    list_print(&head);
    list_destroy(&head);
    printf("**********************************************\n");

    printf("Recursive Print Linked List\n");
    list_init(&head);
    recursive_print(&head);
    list_destroy(&head);
    printf("\n***********************************************\n");

    printf("Recursive Reverse Linked List\n");
    list_init(&head);
    recursive_reverse(&head);
    list_print(&head);
    list_destroy(&head);
    printf("**********************************************\n");

    return 0;
}
