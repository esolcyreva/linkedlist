#include "linkedlist.h"

void list_insert(list_t **head, int data)
{
    list_t *temp = NULL;
    list_t *n = malloc(sizeof(list_t));
    n->next = NULL;
    n->data = data;
    if (*head == NULL) {
        *head = n;
        return;
    }
    temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    return;

}

void list_delete(list_t **head, int data)
{
    list_t *curr, *prev = NULL;
    if (*head == NULL) {
        return;
    }

    /* First element match or not match */
    if ((*head)->next == NULL) {
        if ((*head)->data == data) {
            free(*head);
            *head = NULL;
        }
        return;
    } else if ((*head)->data == data) {
        list_t *temp = *head;
        *head = (*head)->next;
        (*head)->next = NULL;
        free(temp);
        return;
    }
    prev = *head;
    curr = (*head)->next;
    while(curr != NULL) {
        if (curr->data == data) {
            /* Delete the found element */
            prev->next = curr->next;
            free(curr);
            curr = NULL;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
}

void list_print(list_t **head)
{
    list_t *temp = *head;
    if (temp == NULL) {
        printf("Ille\n");
        return;
    }
    while (temp != NULL) {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void list_init(list_t **head)
{
    if (*head != NULL) {
        printf("List not empty\n");
        return;
    }
    list_insert(head, 7);
    list_insert(head, 28);
    list_insert(head, 2);
    list_insert(head, 17);
    list_insert(head, 19);
    list_insert(head, 21);
    list_insert(head, 15);
    list_insert(head, 31);
    list_insert(head, 22);
    list_insert(head, 4);
    list_insert(head, 14);
    list_insert(head, 25);
}

void list_destroy(list_t **head)
{
    list_t *temp = *head;

    while(temp != NULL) {
        int val = temp->data;
        temp = temp->next;
        list_delete(head, val);
    }
}

void iterative_reverse(list_t **head)
{
    list_t *first, *middle;
    first = NULL;
    middle = *head;

    if (middle == NULL || middle->next == NULL) {
        return;
    }

    while(middle != NULL) {
        list_t *temp = middle->next;
        middle->next = first;
        first = middle;
        middle = temp;
    }
    *head = first;
    return;


}

void recursive_print(list_t **head)
{
    list_t *first = *head;
    list_t *rest = NULL;
    if (first == NULL) {
        return;
    }
    rest = first->next;
    recursive_print(&rest);
    printf("%d\t",first->data);
}

void recursive_reverse(list_t **head)
{
    list_t *first = *head;
    list_t *rest = NULL;
    if (first == NULL) {
        return;
    }
    rest = first->next;
    if (rest == NULL) {
        return;
    }
    recursive_reverse(&rest);
    first->next->next = first;
    first->next = NULL;
    *head = rest;
}
