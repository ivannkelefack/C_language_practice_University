//
// Created by Ivan Nkelefack on 2026-06-15.
//

#ifndef C_LANGUAGE_UNIVERISTY_QUEUES_H
#define C_LANGUAGE_UNIVERISTY_QUEUES_H

typedef struct node_t {
    int data;
    struct node_t *next;
} node_t;

typedef struct queue_t {
    node_t *head;
    node_t *tail;
} queue_t;

int queue_is_empty(queue_t *q);
queue_t *enqueue(queue_t *q, int data);
queue_t *dequeue(queue_t *q, int *data);

#endif //C_LANGUAGE_UNIVERISTY_QUEUES_H
