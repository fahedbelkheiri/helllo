#include<stdio.h>
#include<stdlib.h>


struct node{
 int data;
 struct node *link;

};

 
struct node* reverse(struct node *head){
  struct node *next=NULL;
    struct node *perv=NULL;

  while(head!=NULL){
  next=head->link;
  head->link=perv;
  perv=head;
  head=next;
}
head=perv;
return head;
}

int main(){
  
  struct node *head= malloc(sizeof(struct node));
  head->data=45;
  head->link=NULL;

  struct node *fead= malloc(sizeof(struct node));
  fead->data=98;
  fead->link=NULL;
  head->link=fead;

  struct node *fin= malloc(sizeof(struct node));
  fin->data=3;
  fin->link=NULL;
  fead->link=fin;

 struct node *fid= malloc(sizeof(struct node));
  fid->data=67;
  fid->link=NULL;
  fin->link=fid;
  
 head=reverse(head);
 struct node* ptr=head;

  while(ptr !=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->link;
   
    }
   
 return 0;
}