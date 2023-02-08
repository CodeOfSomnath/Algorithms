#include "LinkedList.h"

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
