#include <iostream>
#include <map>
using namespace std;
int main()
{
    // map<key,value>mpp
    // map stores unique in key in sorted order
    // logarithmic time complexity
    map<int,int>mpp;
    map<int,pair<int,int>>mpp1;
    map<pair<int,int>,int>mpp2;

    mpp[1] = 2;
    mpp.emplace(3,2);
    mpp.insert({2,4});
    mpp.insert({4,4});
    mpp2[{2,3}] = 10;

    // {
    //     {1,2}
    //     {2,4}
    //     {3,2}
    // }

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl; // 2
    cout << mpp[5] << endl; // 0

    auto it = mpp.find(3);
    cout << (*it).first << " " << (*it).second << endl; // 3 2

    auto itr = mpp.find(5); // is ponits to the end()

    auto iter1 = mpp.lower_bound(2);
    auto iter2 = mpp.upper_bound(3);

    cout << (*iter1).first << " " << (*iter1).second << endl; // 2 4
    cout << (*iter2).first << " " << (*iter2).second << endl; // 4 4

    // ***********************************************
    // Multimap
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here

    //*************************************************
    // unordered Map
    // same as set and unordered_set difference
    // it have unique keys but it will not be sorted
    // it has O(1) time complexity and O(n) once in a blue moon


    return 0;
}