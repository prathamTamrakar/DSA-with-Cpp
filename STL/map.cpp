#include <iostream>
#include <map>
using namespace std;
int main()
{
    // map<key,value>mpp
    // map stores unique in key in sorted order
    map<int,int>mpp;
    // map<int,pair<int,int>>mpp;
    // map<pair<int,int>,int>mpp;

    mpp[1] = 2;
    mpp.emplace(3,2);
    mpp.insert({2,4});

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

    return 0;
}