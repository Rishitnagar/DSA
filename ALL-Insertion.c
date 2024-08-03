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
// insert the first node
struct Node *insertAtfirst(struct Node *head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next=head; 
    ptr->data=data;
    return ptr;
} 
// insert the end
struct Node *insertAtEnd(struct Node *head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head;

    while (p->next!=NULL)
    {
        p = p->next;    
    }
    p->next = ptr;
    ptr->next=NULL;  
    return head;
} 
// insert the between
struct Node * insertAtIndex(struct Node *head,int data,int index){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;

    while (i!=index-1) 
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next=ptr;
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
    head->data = 7;
    head->next = second;

    // link second and second nodes
    second->data = 11;
    second->next = third;

    // link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linklistTraversal(head);
    // head = insertAtfirst(head,6); 
    // head = insertAtIndex(head,12,3); 
    head = insertAtEnd(head,14); 
    printf("\nLinked list After insertion\n");
    linklistTraversal(head);  
    return 0;
}