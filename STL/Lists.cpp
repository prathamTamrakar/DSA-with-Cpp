#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(1); // 1
    ls.emplace_back(2); // 1 2
    // insert in a vector is costlier
    // for the vector internally singly linked list is maintained and for the list doubly linked list is maintained
    ls.push_front(5); // 5 1 2
    ls.emplace_front(3); // 3 5 1 2
    ls.emplace_front(); // 0 3 5 1 2
    for(auto it : ls){
        cout << it << " ";  
    }

    // rest function same as vector
    return 0;
}