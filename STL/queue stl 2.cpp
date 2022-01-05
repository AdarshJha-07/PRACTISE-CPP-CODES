#include <iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> myqueue;
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(1);
    myqueue.push(7);

    // Queue becomes 3, 4, 1, 7

    cout << myqueue.back();
    return 0;
}
