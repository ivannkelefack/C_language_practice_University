//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "length.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int length(node_t *head) {
    int count = 0;
    node_t *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    node_t *head = NULL;

    node_t *node1 = malloc(sizeof(node_t));
    node_t *node2 = malloc(sizeof(node_t));
    node_t *node3 = malloc(sizeof(node_t));
    assert(node1 != NULL);
    assert(node2 != NULL);
    assert(node3 != NULL);

    node1->data = 30;
    node1->next = node2;
    node2->data = 20;
    node2->next = node3;
    node3->data = 10;
    node3->next = NULL;
    head = node1;

    printf("Length: %d\n", length(head));

    return 0;
}