//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "single_node.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    node_t *node = malloc(sizeof(node_t));
    assert(node != NULL);

    node->data = 10;
    node->next = NULL;

    printf("Node value: %d\n", node->data);

    free(node);
    return 0;
}