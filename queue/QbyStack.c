// implement a queue with 2 stacks
//source: cracking the code, problem 3.5
// 11/29/15

#include <stdio.h>

typedef struct node NODE;

NODE * push (NODE *, NODE **, int);
NODE * pop (NODE **, NODE **);

struct node
{
	int data;
	struct node next;

};

int main()
{
	NODE *push_stack, *pop_stack;
	push_stack = pop_stack = NULL;

	push_stack = push(push_stack, &pop_stack, 3);
	push(push_stack, 4);
	push(push_stack, 5);

	pop(&pop_stack);
	pop(&pop_stack);

	retrun 0;
}

NODE * super_push (NODE *s1, NODE * s2, int value)
{
	// s1 empty, but s2 not. so push everything back from s2 to s1
	if(!(*s1) && *s2)
	{
		*s1 = push(s1, &s2, pop())
	}

	// both stacks are empty
	if(s1 == NULL)
		if ()
}

NODE * pop (NODE ** s2, NODE ** s1)
{
	
}


////////////////////////////////////////
/* Program to implement a queue using two stacks */
#include<stdio.h>
#include<stdlib.h>
 
/* structure of a stack node */
struct sNode
{
   int data;
   struct sNode *next;
};
  
/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data);
  
/* Function to pop an item from stack*/
int pop(struct sNode** top_ref);
  
/* structure of queue having two stacks */
struct queue
{
   struct sNode *stack1;
   struct sNode *stack2;
};
  
/* Function to enqueue an item to queue */
void enQueue(struct queue *q, int x)
{
   push(&q->stack1, x);
}
  
/* Function to dequeue an item from queue */
int deQueue(struct queue *q)
{
   int x; 
  
   /* If both stacks are empty then error */
   if(q->stack1 == NULL && q->stack2 == NULL)
   {
      printf("Q is empty");
      getchar();
      exit(0);
   }
 
   /* Move elements from satck1 to stack 2 only if 
       stack2 is empty */
   if(q->stack2 == NULL)
   {
     while(q->stack1 != NULL)
     {
        x = pop(&q->stack1);
        push(&q->stack2, x);
     }
   } 
 
   x = pop(&q->stack2);
   return x;
}
  
/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data)
{
  /* allocate node */
  struct sNode* new_node =
            (struct sNode*) malloc(sizeof(struct sNode));
  
  if(new_node == NULL)
  {
     printf("Stack overflow \n");
     getchar();
     exit(0);
  }            
  
  /* put in the data  */
  new_node->data  = new_data;
  
  /* link the old list off the new node */
  new_node->next = (*top_ref);   
  
  /* move the head to point to the new node */
  (*top_ref)    = new_node;
}
  
/* Function to pop an item from stack*/
int pop(struct sNode** top_ref)
{
  int res;
  struct sNode *top;
  
  /*If stack is empty then error */
  if(*top_ref == NULL)
  {
     printf("Stack overflow \n");
     getchar();
     exit(0);
  }
  else
  {
     top = *top_ref;
     res = top->data;
     *top_ref = top->next;
     free(top);
     return res;
  }
}
  
/* Driver function to test anove functions */
int main()
{
   /* Create a queue with items 1 2 3*/
   struct queue *q = (struct queue*)malloc(sizeof(struct queue));
   q->stack1 = NULL;
   q->stack2 = NULL;
   enQueue(q, 1);
   enQueue(q, 2);
   enQueue(q, 3);    
  
   /* Dequeue items */
   printf("%d  ", deQueue(q));
   printf("%d  ", deQueue(q));
   printf("%d  ", deQueue(q));  
  
   getchar();
}