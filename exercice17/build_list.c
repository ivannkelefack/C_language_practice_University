//
// Created by Ivan Nkelefack on 2026-06-13.
//

#include "build_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


node_t *push(node_t *head, int data) {
    node_t *newnode = malloc(sizeof(node_t));
    assert(newnode != NULL);
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}

int main() {
    node_t *head = NULL;

    head = push(head, 10);
    head = push(head, 20);
    head = push(head, 30);

    node_t *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}