#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
typedef struct Node Node;
/*
  If you want to add a value into your head pointer then 
  you can use this method.p
*/
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

/*
  It is only for 1-D LinkedList
*/
void print(Node *head, int *size) {
  Node *temp = head->next;
  printf("[");
  for (int i = 0; i < *size; i++) {
    if (i == *size - 1) {
      printf("%d", temp->data);
    } else {
      printf("%d, ", temp->data);
    }
    temp = temp->next;
  }
  printf("]\n");
}

void insert(Node *head, int *size, int index, int data) {
  Node *fast;
  Node *node = (Node *)malloc(sizeof(Node));
  Node *last;
  Node *temp = head->next;
  for (int i = 0; i < index - 1; i++) {
    temp = temp->next;
  }
  fast = temp;
  last = fast->next;
  fast->next = node;
  node->next = last;
  node->data = data;
  *size += 1;
}

#endif
