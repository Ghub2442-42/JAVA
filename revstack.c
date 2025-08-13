#include<stdio.h>
#include<stdlib.h>
#define MAX20
int top=-1;
{
  if(top==max-1)
  printf("\n stack overflow");
  else
     stack[++top]=ele;
     return 0;
   }
   int pop()
   {
     if (top==-1)    
        printf("\n stack underflow");
     else
     return stack[top--];
     }
      struct node
      {
        int data;
         struct node *next;
      };
       typedef struct node NODE;
       NODE *head=NULL;
       int create()
       {
        NODE *new_node,*tail;
        char ch;
        do{
        new_node=(NODE*)malloc(sizeo(NODE));
        printf("\n enter node value:");
        scanf("%d",&new_node->data);
        if(head==NULL)
        {
        head=new_node;
        tail=new_node;
        }
        else{
        tail->next=new_node;
        tail=new_node;
        } 
        printf("do you want to continue:(y/n)");
        scanf(" %c",&ch);
        }
          while(ch=='Y'||ch=='y')
          return 0;
        }
          int display()
          {
            NODE *temp=head;
            while(temp!=NULL)
            {
             printf("%d->",temp->next);
             temp=temp->next;
             return 0;
             }
             int reverse()
             {
              NODE *temp=head;
              while(temp!=NULL)
              {
                push(temp->data);
                temp=temp->next;
              }
              temp=head;
              while(temp!=NULL)
              {
              temp->data=pop();
              temp=temp->next;
              }
              return 0;
              }
              int main(){
              create()  
               
