#include<iostream>
#include<stdlib.h>
//#include<queue>
using namespace std;



struct queue{

 int data;
 struct queue*next;


}*front=NULL,*rear=NULL;

void enqueue(int x){
   struct  queue *newnode;
   newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->data=x;


if(front==NULL&&rear==NULL){

    front=newnode;
    rear=newnode;
    newnode->next=NULL;

}

else {
    rear->next=newnode;

rear=newnode;
newnode->next=NULL;
}





}
void dequeue(){

if(front==NULL&&rear==NULL){

    printf("UNDERFLOW");
}
else if(front==rear){
    front=NULL;
    rear=NULL;
}
else{
    front=front->next;

}

}
void peek(){

if(front==NULL&&rear==NULL){

    printf("NO ELEMENTS");
}
else {
    printf("%d",front->data);
}

}
void display()
{ struct queue *temp;
temp=front;

    while(temp!=0){
        cout<<temp->data<<endl;
        temp=temp->next;

    }


}


int main(){
    enqueue(9);

    enqueue(7);
   enqueue(8);
    //dequeue();
    //dequeue();
    //dequeue();
   // peek();
    //display();
    enqueue(4);
    enqueue(5);
    //peek();
    display();







}
