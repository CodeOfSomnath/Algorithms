#ifndef LINKED_LIST_H

#define LINKED_LIST_H

#include <stdio.h>

#include <stdlib.h>

struct Node {

  int data;

  struct Node *next;

};

typedef struct Node Node;

Node *init(Node *ptr, int data) {

  ptr->data = data;

  ptr->next = (Node *)malloc(sizeof(Node));

  return ptr->next;

}

// it will update your node

Node *add(Node *ptr, int *size, int data) {

  ptr->data = data;

  ptr->next = (Node *)malloc(sizeof(Node));

  *size += 1;

  return ptr->next;

}

void print(Node *head, int *size) {

  Node *temp = head->next;

  for (int i = 0; i < *size; i++) {

    printf("%d\n", temp->data);

    temp = temp->next;

  }

}

#endif
