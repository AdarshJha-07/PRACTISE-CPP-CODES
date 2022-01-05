#include<iostream>
#include<array>
using namespace std;
int main(){

array<int,5>arr1={11,22,33,44,55};
array<int,5>arr2={1,2,3,4,5};
//cout<<arr.at(4)<<endl;//
cout<<arr1.front()<<endl;
cout<<arr1.back()<<endl;
cout<<arr1.size()<<endl;//doenot depends how many elements are there...

arr1.swap(arr2);//swaping only when data type and no. of elemements are equal....
cout<<arr1[0];
}
