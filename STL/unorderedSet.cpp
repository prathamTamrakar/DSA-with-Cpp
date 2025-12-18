#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function does not work, rest all functions are same
    // as above, it does not store in any particular order it has a better complexity that set in most cases, except some when collison happens
    // random order
    // O(1) complexity
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(7);
    st.insert(8);

    for(auto i: st){
        cout << i << " ";
    }

    return 0;
}