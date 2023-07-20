#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

// Case 1: Insert at the beginning
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;
 
    ptr->next = head;

    return ptr; 
} 

// Case 2: Insert at the index (between)
struct Node * insertAtIndex(struct Node *head, int data,int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

    struct Node * p = head ;

    int i=0;

    while(i != index-1)
    {
        p = p->next ;
        i++ ;
    }

    ptr -> data = data;

    ptr -> next = p -> next ;
    p -> next = ptr ;

    return head;
} 

// Case 3: Insert at the end
struct Node * insertAtEnd(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;
 
    while(p->next !== NULL)
    {
        p = p->next ;
    }

    p -> next = ptr ;
    ptr -> next = NULL ;
    
    return head; 
}

// Case 4: Insert after node
struct Node * insertAfterNode(struct Node *head,struct Node *prevNode , int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));

    ptr->data = data;
 
    ptr->next = prevNode -> next ;
    prevNode -> next = ptr ;

    
    return head; 
}


//------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------

int main()
{
    struct Node *head ;
    struct Node *second ;
    struct Node *third ;
    struct Node *fourth ;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Case 1: Insert at the beginning
    head = insertAtFirst(head,56);

    // Case 2: Insert at the index (between)
    head = insertAtIndex(head,56,1);

    // Case 3: Insert at the end
    head = insertAtEnd(head,56);

    // Case 4: insert after node
    head = insertAfterNode(head,second,45);


    return 0;
}