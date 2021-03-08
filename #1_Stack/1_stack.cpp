/******************************************************
*Description: Stack data structure -LAST IN FIRST OUT [lifo]
*
*Nikhil Gowda Shivaswamy
*       -ME in Information Technology
*****************************************************/



#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int Size = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s)
{
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s)
{
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem)
{
  if (isfull(s))
    {
    printf("STACK FULL");
    }
  else
    {
    s->top++;
    s->items[s->top] = newitem;
    }
  Size++;
}

// Remove element from stack
void pop(st *s)
{
  if (isempty(s))
    {
    printf("\n STACK EMPTY \n");
    }
  else
    {
    printf("Item popped= %d", s->items[s->top]);
    s->top--;
    }
  Size--;
  cout << endl;
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < Size; i++) {
    cout << s->items[i] << " ";
  }
  cout << endl;
}

// Driver code
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);
  for (int i=0;i< MAX;i++)
  {
    push(s, i);
  }

 /* push(s, 2);
  push(s, 3);
  push(s, 4);*/

  printStack(s);

  pop(s);

  cout << "\nAfter popping out\n";
  printStack(s);
}
