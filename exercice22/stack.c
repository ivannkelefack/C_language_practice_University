//
// Created by Ivan Nkelefack on 2026-06-15.
//

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int is_empty(node_t *top) {
    return top == NULL;
}

node_t *push(node_t *top, int data) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = top;
    return new_node;
}

node_t *pop(node_t *top, int *data) {
    node_t *temp = top;
    *data = temp->data;
    top = temp->next;
    free(temp);
    return top;
}

int main() {
    node_t *top = NULL;
    int data;

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);

    while (!is_empty(top)) {
        top = pop(top, &data);
        printf("%d\n", data);
    }

    return 0;
}