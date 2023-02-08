



## LinkedList.c 

Here you can create linkedList objects as example have in main method 

Here is a example:
 ```c

#include "LinkedList.h"

int main(){
  Node *head = (Node *)malloc(sizeof(Node));

  head->next = (Node *)malloc(sizeof(Node));

  Node *node = head->next;

  int x = 0;

  int *size = &x;

  node = add(node, size, 11); // add function return the next node pointer

  node = add(node, size, 12);

  node = add(node, size, 13);

  node = add(node, size, 14);

  print(head, size); // by giving the main pointer and size it will print the values



  return 0;
}

```


## Installation 
Just simply download LinkedList.h and start using 

