#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
int data;
struct node*next;
}*head;

void createlinklist(){
struct node*newnode,*temp;
head=0;int choice=1;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node*));
printf("Enter the value ");
scanf("%d",&newnode->data);
if(head==0)
{
    head=newnode;
    temp=head;
    newnode->next=newnode;

}
else{
    temp->next=newnode;
    temp=temp->next;
newnode->next=head;}
printf("choice");
scanf("%d",&choice);}}

void disp(){
struct node*temp=head;
while(temp->next!=head)
    {
    cout<<temp->data<<endl;
    temp=temp->next;
}cout<<temp->data;



}
void rev(){
struct node*current=head,*next=NULL,*prev=NULL;
while(current->next!=head){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;

}
head->next=current;
current->next=prev;
head=current;


}






int main(){
createlinklist();
rev();
disp();



}
