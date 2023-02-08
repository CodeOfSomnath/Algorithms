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

int main(void) {

  Node *head = (Node *)malloc(sizeof(Node));

  head->next = (Node *)malloc(sizeof(Node));

  Node *node = head->next;

  int x = 0;

  int *size = &x;

  node = add(node, size, 11);

  node = add(node, size, 12);

  node = add(node, size, 13);

  node = add(node, size, 14);

  print(head, size);

  // printf("Hello World\n");

  return 0;

}
