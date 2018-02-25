#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_s {
    struct linked_list_s *next;
    int data;
}list_t;

void list_insert(list_t **, int);
void list_delete(list_t **, int);
void list_init(list_t **);
void list_destroy(list_t **);
void list_init(list_t **);
void list_print(list_t **);
void iterative_reverse(list_t **);
void recursive_print(list_t **);
void recursive_reverse(list_t **);
