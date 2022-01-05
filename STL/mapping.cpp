#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){

map<int,int>m1={{2,0},{3,5},{5,7},{4,9}};//ascending and unique//it auto matically sort the value in accordance of in first number in a pair// logn 
map<string,long,greater<>>m2;
m2.insert(make_pair("ADARSH",9798));
m2.insert(make_pair("RAHUL",979845));
m2.insert(make_pair("R",97745));
m2["RANI"]=786996;
m2["RANI"]=78699546;
for (const auto&e:m2 )
{
   cout<<e .first<<" "<<e.second<<endl;/* code */
}
map<string,vector<int>>m3;


// m1.insert(make_pair(6,8));
// m1.insert(pair<int,int>{11,13});
// map<int,int>::iterator p=m1.begin();
// m1.erase(3);
// while(p!=m1.end()){
// cout<<p->second<<endl;
// p++;


// }
// if(m1.count(11)>0){//to check
//     cout<<"found";
// }

// cout<<m1.size()<<endl;
// cout<<m1.at(11);

unordered_map<int,int>unmm; //not ascending but uique// generally o(1) but in worst case o(n) 
unordered_map<pair(1,3),4>unmmm;// not possible

multimap<int,string>mm;//ascending but not unique





}
