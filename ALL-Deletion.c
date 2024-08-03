#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linklistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
//case 1: Deleting the first element from the linked list 
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// case 2:Deleting the first element at a given index from the linked list 
struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
       p = p->next;
       q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// case 3:Deleting the last element
struct Node * deleteAtLast(struct Node * head){   
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;


    // Allocate memory for node in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 4;
    head->next = second;
   
    // link second and second nodes
    second->data = 3;
    second->next = third;
   
    // link third and fourth nodes
    third->data = 8;
    third->next = fourth;
   
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linklistTraversal(head);
    
//   head = deleteFirst(head);//For deleting first element for the linked list
//   head = deleteAtIndex(head,2);
  head = deleteAtLast(head);
    printf("Linked list After deletion\n");
    linklistTraversal(head);
    return 0;
}