#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}SLL;

SLL* create(int data)
{
    SLL * newnode= (SLL*)malloc(sizeof(SLL));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void print(SLL *head)
{
    SLL* temp=head;
    while(temp)
    {
        printf("%d, ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertlast(SLL **head,SLL*newnode)
{
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    SLL* temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
void insert_at_pos(SLL **head,int pos,SLL*newnode)
{
    SLL*temp=*head;
    int count=1;
    while(!(count==(pos-1))&& temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

int main()
{
    SLL *head=NULL; 
    SLL *temp=NULL;
    int arr[]={1,3,2,5,6,7,8};

    head=create(arr[0]);
    temp=head;
    for(int i=1;i<7;i++)
    {
        temp->next=create(arr[i]);
        temp=temp->next;
    }
    
    printf("The linked list contains\n");
    print(head);

    printf("Adding new element at the end\n");
    SLL*newn=create(20);
    insertlast(&head,newn);
    print(head);

    insert_at_pos(&head,3,create(30));
    print(head);

    return 0;
    

}