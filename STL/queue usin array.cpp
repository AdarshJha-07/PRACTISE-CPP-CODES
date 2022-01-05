#include<iostream>
using namespace std;
#define  N 5
int queue[N];
int front=-1 ,rear=-1;
void enqueue(int x){
if(front==-1&&rear==-1){
    front=0;rear=0;
    queue[rear]=x;
}
else if(rear==N-1){
        printf("OVERLOADED");


}
else {
    rear++;
    queue[rear]=x;

}

}
void dequeue(){

if(front==-1&&rear==-1){

    printf("UNDERFLOW");
}
else if(front==rear){
    front=-1;
    rear=-1;
}
else{
    front++;



}

}
void peek(){

if(front==-1&&rear==-1){

    printf("NO ELEMENTS");
}
else {
    printf("%d",queue[front]);
}

}
void display()
{
    for(int i=front;i<=rear;i++){

        cout<<queue[i]<<endl;

    }


}


int main(){
    enqueue(9);

    enqueue(7);
   enqueue(8);
    dequeue();
    dequeue();
    //dequeue();
   // peek();
    //display();
    enqueue(4);
    enqueue(5);
    //peek();
    display();







}
