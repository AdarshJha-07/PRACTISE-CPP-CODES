#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    
list<int>l1={5,2,8,7,1,5,4,66,23}; //
list<string>l2{"ADARSH","RAHUL","SHIVAM"};

l2.push_back("raj");
l2.push_front("jay");
//l1.sort();
//l1.reverse();
l1.remove(23); // O(1)
//l1.clear();
list<int>::iterator p1=l1.begin();
list<string>::iterator p2=l2.begin();
while(p1!=l1.end()){

    cout<<*p1<<endl;
    p1++;
}
l2.pop_back();
l2.pop_front();

cout<<l2.size();


}