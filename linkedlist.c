#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

list_t *head = NULL;
list_t *reverse_k(list_t **head, int k);

int main()
{
    list_t *temp_head = NULL;
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

    printf("Reverse Linked List k-groups\n");
    list_init(&head);
    temp_head = reverse_k(&head, 3);
    list_print(&temp_head);
    list_destroy(&temp_head);
    head = NULL;
    temp_head = NULL;
    printf("**********************************************\n");

    return 0;
}
