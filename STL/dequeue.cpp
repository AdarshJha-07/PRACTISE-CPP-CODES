#include<bits/stdc++.h>
using namespace std;
int main(){
    
deque<int>dq;  // similar to vector  doubly queue 
dq.push_back(33);
dq.push_front(4);
dq.pop_back();
dq.pop_front();
cout<<dq.front();

}