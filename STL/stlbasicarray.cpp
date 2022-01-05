#include<iostream>
#include<array>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

std::array<int,5>arr={1,2,3,4,5};
std::vector<int>arr1;


//arr.fill(10);
//arr.back
//arr.begin()
//arr.cbegin();
//arr.crbegin();
arr1.reserve(32);
for(int i=0;i<32;i++){
        arr1.push_back(i);

cout<<arr1.size()<<" "<<arr1.capacity()<<endl;
}

}
