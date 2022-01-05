#include<iostream>
#include<set>
#include<string>
#include<functional>
#include<bits/stdc++.h>
using namespace std;
class school{
public:
   int age;
   string name;
   bool operator<(const class school &rhs)const{return age<rhs.age;}
   bool operator>(const class school &rhs)const{return age>rhs.age;}

};

int main(){
//sorted;
std::set<int>s={1,2,3,2,5,6,9,6,7,9,10,5,8,5,11,45,87,34};//LOGN//ascending and unique
if(s.count(2)>0)
{
   cout<<"FOUND";
}
else
{
   cout<<"NOT FOUND";
}
s.insert(3);
s.find(2);//it gives first instance of 2;
unordered_set<int>us;// not ascending but unique
unordered_multiset<int>umm;// not ascending ,not  unique//O(1)

//set<school,greater<>>s3={{25,"adarsh"},{26,"sachin"},{28,"rahul"}};
multiset<school>s2={{25,"adarsh"},{26,"sachin"},{28,"rahul"},{25,"adarsh"},{26,"sachin"},{28,"rahul"}};
multiset<int,string>ms;//ascending,not unique//LOGN
ms.insert(2);
ms.insert(1);
ms.insert(2);
ms.insert(1);
ms.insert(3);
for(auto it=ms.begin();it!=ms.end();it++)
{
   cout<<*it<<" ";
   cout<<endl<<"h";
}
for(auto &it:ms)
{
   cout<<it<<endl;
}

 for(const auto&e: s2 ){
   // cout<<e<<endl;
    cout<<e.age<<" "<<e.name<<endl;

}



}
