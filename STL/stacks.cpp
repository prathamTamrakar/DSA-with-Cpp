#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int>st;
    // complexity of stack operation is O(1) means happened in the constant time
    // LIFO - Last In First Out
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}
    cout << st.top() << endl; // 5
    // st[0] is invalid
    st.pop(); // {4,3,2,1}
    cout << st.top() << endl; // 4
    cout << st.size() << endl;; // 4
    cout << st.empty() << endl; // 0 NO
    
    stack<int>st1,st2;
    st1.swap(st2);
    return 0;
}