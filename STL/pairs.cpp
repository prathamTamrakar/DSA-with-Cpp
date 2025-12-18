#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << endl;;

    pair<int,pair<int,int>> otherPair = {1,{3,4}};
    cout << otherPair.first << " " << otherPair.second.first << " " << otherPair.second.second << endl;

    pair <char,int> ch = {'C',1};
    cout << ch.first << " " << ch.second << endl;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].first << " " << arr[0].second << endl;
    return 0;
}