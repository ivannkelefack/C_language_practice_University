//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "three_nodes.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main() {
    node_t *node1 = malloc(sizeof(node_t));
    node_t *node2 = malloc(sizeof(node_t));
    node_t *node3 = malloc(sizeof(node_t));
    assert(node1 != NULL);
    assert(node2 != NULL);
    assert(node3 != NULL);

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    node_t *current = node1;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    free(node1);
    free(node2);
    free(node3);
    return 0;
}