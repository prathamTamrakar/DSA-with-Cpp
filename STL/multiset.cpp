#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // removes all 1s

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout << ms.count(1) << endl; // 4

    ms.erase(ms.find(1)); // erase only one occurrence

    auto it = ms.find(1);
    auto it2 = it;
    advance(it2, 2);
    ms.erase(it, it2); // erase two occurrences
    ms.insert(4);
    ms.insert(7);
    ms.insert(7);
    ms.insert(8);
    for(auto i: ms){
        cout << i << " "; // 1 4 7 7 8
    }
    return 0;
}
