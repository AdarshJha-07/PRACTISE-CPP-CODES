#include<bits/stdc++.h>
using namespace std;
int main(){

priority_queue<int>pq; //priority means descending order not unique 
pq.push(1);
pq.push(2);
pq.push(3);
pq.push(4);
pq.push(4);
cout<<pq.top()<<pq.size();
priority_queue<int,vector<int>,greater<int>>mpq;//minimum priority que ascending order//all cases in logn even in worst
mpq.push(1);
mpq.push(2);
mpq.push(3);
mpq.push(4);
mpq.push(4);
cout<<" "<<mpq.top();

}