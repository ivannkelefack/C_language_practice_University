//
// Created by Ivan Nkelefack on 2026-06-15.
//

#include "project_queues.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int queue_is_empty(queue_t *q) {
    return q->head == NULL;
}

queue_t *enqueue(queue_t *q, char *name) {
    node_t *new_node = malloc(sizeof(node_t));
    strncpy(new_node->name, name, 50);
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

queue_t *dequeue(queue_t *q, char *name) {
    node_t *temp = q->head;
    strncpy(name, temp->name, 50);
    q->head = temp->next;
    if (q->head == NULL)
        q->tail = NULL;
    free(temp);
    return q;
}

int main() {
    queue_t q = {NULL, NULL};
    char name[50];

    FILE *f = fopen("students.txt", "r");
    if (f == NULL) {
        printf("Error: could not open students.txt\n");
        return 1;
    }

    while (fscanf(f, "%49s", name) == 1) {
        enqueue(&q, name);
    }
    fclose(f);

    printf("Students in order:\n");
    while (!queue_is_empty(&q)) {
        dequeue(&q, name);
        printf("%s\n", name);
    }

    return 0;
}