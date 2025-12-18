#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    // maximum or largest element stored in the top
    // Maximum heap
    pq.push(1); // {1}
    pq.push(2); // {2,1}
    pq.emplace(3); // {3,2,1}
    pq.emplace(10); // {10,3,2,1}
    cout << pq.top() << endl; // 10
    pq.push(4); // {10,4,3,2,1}
    pq.push(11); // {11,10,4,3,2,1}
    cout << pq.top() << endl; // 11
    pq.pop();
    cout << pq.top() << endl; // 10

    cout << pq.size() << endl; // 5
    cout << pq.empty() << endl; // 0

    // Minimum Heap
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(5); // {5}
    q.push(2); // {2,5}
    q.emplace(3); // {2,3,5}
    q.emplace(10); // {2,3,5,10}

    cout << q.top()<< endl; // 2

    // time complexity of operations in Priority queue
    // push and pop happen in O(log n)
    // top operation happen in O(1)
    return 0;
}