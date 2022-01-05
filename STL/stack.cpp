
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int n;
#define n 5
int stack[n];
int top=-1;

void push(){
int a;
cout<<"ENTER THE VALUE ";
cin>>a;
if(top>=n-1){
    cout<<"overflow";
}
else{
    top++;
    stack[top]=a;

}}

void pop(){
    int temp;
    if(top<-1)
    cout<<"underflowerror";
    else {temp=stack[top];
    top--;}
    cout<<temp;



}


int main(){


//push();
//pop();
 stack<int>st;
st.push(3);
st.push(4);

}
