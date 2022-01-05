#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h> 

using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{

    if(a.second<b.second)
    return 1;
    if(b.second==a.second&&a.first<a.first)
    return 1;
    else 
    return 0;
}
int main()
{
vector<int>v1;//o length vector created
v1={3,41,2,6};//6 capacity and size is 3
vector<int>v2={1,2,3,4};//4 length vector;
vector<int>v3(5);//5 length vector created;
vector<string>v4(4,"ADARSH");//4 BLOCKS CREATED and in each ADARSH saved;
//cout<<v3[0];//[]operator ;
//cout<<v1.front();//prints first element
 v1.push_back(4);//insert at last of vector
sort(v1.begin(),v1.begin()+v1.size());//ascending order 
sort(v1.begin(),v1.begin()+v1.size(),greater<int>());//desecending order
vector<pair<int,int>>v5;

v5.push_back(make_pair(2,8));
v5.push_back(make_pair(3,7));
v5.push_back(make_pair(4,6));
v5.push_back(make_pair(5,5));



sort(v5.begin(),v5.end(),cmp);
int i;
for(i=0;i<v5.size();i++){
    cout<<v5[i].first<<" "<<v5[i].second<<endl;
}

/*reverse(v1.begin(),v1.end());//reverses the vector;
cout<<v1.back();
cout<<v1.size()<<endl;//returns no. of elements in vector;
cout<<v1.capacity();
v1.pop_back();//removes last element;
v1.begin();

vector<char>s1;
string name;
cin>>name;
int i;
for(i=0;i<name.size();i++)
    s1.push_back(name[i]);
cout<<s1[4];*/


}
