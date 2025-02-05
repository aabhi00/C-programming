#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


void llTraversel(struct node *ptr){
    printf("the llinked list is --> \n ");
while(ptr != NULL){
    printf("%d->",ptr->data);
    ptr = ptr->next;
}
printf("NULL\n");
}

//insert at head
struct node * insertAtFirst(struct node *head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
   ptr->data = data;
   ptr->next = head;
   return ptr;
}

//insert in between the linked list
struct node *insertInBetween(struct node *head,int data,int idx){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while(i != idx-1){
     p = p->next;
     i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//insertion at th end
struct node *insertAtTheEnd(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//deleation

//deleation at head
struct node *deleatAtFirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//deleation at index
struct node * deleatAtIdx(struct node * head,int idx){
    struct node *p = head;
    struct node *q = head->next;
    for(int i = 0;i < idx-1; i++){
        p = p->next;
        q= q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

//deleating the last element
struct node *deleatAtLast(struct node * head){
    struct node *p =head;
    struct node *q =head->next;

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    }

int main()
{
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
//allocation of heap memory

head = (struct node *) malloc(sizeof(struct node));
second = (struct node *) malloc(sizeof(struct node));
third = (struct node *) malloc(sizeof(struct node));
fourth = (struct node*) malloc(sizeof(struct node));
head->data = 7;
head->next = second;
second->data = 5;
second->next = third;
third->data = 4;
third->next = fourth;
fourth->data = 9;
fourth->next = NULL;

//TRAVERSEL

llTraversel(head);
head = insertAtFirst(head,10);
llTraversel(head);
insertAtTheEnd(head,13);
llTraversel(head);
insertInBetween(head,14,4);
llTraversel(head);
// deleatAtFirst(head);
llTraversel(head);
deleatAtLast(head);
llTraversel(head);
deleatAtIdx(head,4);
llTraversel(head);
return 0;
}