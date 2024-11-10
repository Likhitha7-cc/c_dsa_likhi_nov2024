#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL,*tail=NULL;                                                                                                        
void create(){
    struct node *newnode=malloc(sizeof(struct node));
    int value;
    printf("enter value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail==newnode;
    }
}
