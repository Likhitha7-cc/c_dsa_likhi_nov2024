#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail=NULL;
void create(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_begin(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}   
void insert_end(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void delete_begin(){
    struct node *temp=head;
    head=head->next;
    free(temp);
    head->prev=NULL;
}
void delete_end(){
    struct node*ptr=ptr->next;
    tail=ptr;
    ptr=tail->next;
    tail->next=NULL;
    free(ptr);
}
void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int ch;
    do{
        printf("enter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            create();
            break;
            case 2:
            insert_begin();
            break;
            case 3:
            insert_end();
            break;
            case 4:
            delete_begin();
            break;
            case 5:
            delete_end();
            break;
            case 6:
            display();
            break;
            default :
            printf("Invalid\n");
        }
    }while(ch!=0);
}