#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>q;
    // FIFO - FIrst In First Out
    // complexity of queue operation is O(1) means happened in the constant time
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(3); // {1,2,3}
    q.back()+=5;
    cout << q.back() << endl; // 8
    // Q is {1,2,8}
    cout << q.front() << endl; // 1
    q.pop(); // {2,8}
    cout << q.front() << endl; // 2

    // size , swap, empty same as stack
    return 0;
}