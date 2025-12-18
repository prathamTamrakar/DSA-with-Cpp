#include <iostream>
#include <set>
using namespace std;
int main()
{
    // Set - Everything is in sorted order and unique
    // everything is happen in logarithmic time complexity 
    set<int>st;
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.emplace(2); // {1,2}
    st.emplace(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin,end,rbegin,rend,size,empty and swap are same as those of above

    auto it = st.find(3); // it returns iterator which points to the address
    cout << *it << endl; // 3
    auto itr = st.find(6); // if element not present in the stack then it points to the end()
    itr--;
    cout << *itr << endl; // 4

    cout << st.size() << endl; // 4
    st.erase(3); // erase 3 and take logrithmic time 
    cout << st.size() << endl; // 3

    int count1 = st.count(2);
    int count2 = st.count(7);
    cout << count1 << " " << count2 << endl; // 1 0

    auto iter = st.find(2);
    cout << *iter << endl; // 2
    st.erase(iter); // it takes constant time

    for(auto i: st){
        cout << i << " "; // 1 4
    }
    cout << endl;
    st.insert(2);
    st.insert(3);
    st.insert(5);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // we get {1,4,5}

    // lower_bound() and upper_bound() function works in the same way as in vector it does
    auto iter1 = st.lower_bound(4); // Finds the beginning of a subsequence matching given key.
    auto iter2 = st.upper_bound(4); // terator pointing to the first element greater than key, or end().

    cout << *iter1 << endl; // 4
    cout << *iter2 << endl; // 5

    for(auto i: st){
        cout << i << " "; // 1 4 5
    }

    return 0;
}