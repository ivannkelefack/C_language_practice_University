//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "print_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

void print(node_t *head) {
    node_t *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    node_t *node1 = malloc(sizeof(node_t));
    node_t *node2 = malloc(sizeof(node_t));
    node_t *node3 = malloc(sizeof(node_t));
    assert(node1 != NULL);
    assert(node2 != NULL);
    assert(node3 != NULL);

    node1->data = 30; node1->next = node2;
    node2->data = 20; node2->next = node3;
    node3->data = 10; node3->next = NULL;

    print(node1);

    return 0;
}