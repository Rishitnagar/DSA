#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
};
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
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *Four;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    Four = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;

    second->data = 21;
    second->next = third;

    third->data = 39;
    third->next = Four;

    Four->data = 54;
    Four->next = NULL;
    
head = deleteAtIndex(head,1);
linkedlistTraversal(head);
    return 0;
}