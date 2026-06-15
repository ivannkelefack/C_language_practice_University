//
// Created by Ivan Nkelefack on 2026-06-15.
//

#include "queues.h"
#include <stdio.h>
#include <stdlib.h>

int queue_is_empty(queue_t *q) {
    return q->head == NULL;
}

queue_t *enqueue(queue_t *q, int data) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    if (queue_is_empty(q)) {
        q->head = new_node;
        q->tail = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = new_node;
    }
    return q;
}

queue_t *dequeue(queue_t *q, int *data) {
    node_t *temp = q->head;
    *data = temp->data;
    q->head = temp->next;
    if (q->head == NULL)
        q->tail = NULL;
    free(temp);
    return q;
}

int main() {
    queue_t q = {NULL, NULL};
    int data;

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printf("Dequeuing in FIFO order:\n");
    while (!queue_is_empty(&q)) {
        dequeue(&q, &data);
        printf("%d\n", data);
    }

    return 0;
}
