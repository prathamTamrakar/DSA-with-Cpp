#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1); // 1
    dq.emplace_back(2); // 2 1
    dq.push_front(5); // 5 1 2
    dq.emplace_front(3); // 3 5 1 2

    dq.pop_back(); // 3 5 1
    dq.pop_front(); // 5 1

    cout << dq.back() << " "; // 1
    cout << dq.front() << endl;; // 5
    for(auto it : dq){
        cout << it << " ";  
    }

    // rest function same as vector
    return 0;
}