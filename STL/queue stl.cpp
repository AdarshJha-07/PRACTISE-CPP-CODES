#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

std::queue<int>q;

/*struct queue{

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

}*/
void display()
{
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();

    }


}
queue<int> rev(queue<int> q)
{  int n=q.size();
    while(n--){
       //cout<<q.front()<<endl;
 q.push(q.front());

 q.pop();


}while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();

    }


}



int main(){

    q.push(5);
    q.push(6);
    q.push(7);

//q.front();
//q.back();

rev(q);
    //enqueue(9);

   // enqueue(7);
   //enqueue(8);
    //dequeue();
    //dequeue();
    //dequeue();
   // peek();
    //display();
   // enqueue(4);
   // enqueue(5);
    //peek();
   // display();







}
