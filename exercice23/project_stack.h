//
// Created by Ivan Nkelefack on 2026-06-15.
//

#ifndef C_LANGUAGE_UNIVERISTY_STACK_H
#define C_LANGUAGE_UNIVERISTY_STACK_H

typedef struct node_t {
    int data;
    struct node_t *next;
} node_t;

int is_empty(node_t *top);
node_t *push(node_t *top, int data);
node_t *pop(node_t *top, int *data);

#endif //C_LANGUAGE_UNIVERISTY_STACK_H
