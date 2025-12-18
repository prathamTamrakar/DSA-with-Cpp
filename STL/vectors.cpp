#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << endl; // 1
    cout << v[1] << endl; // 2
    v.push_back(3);
    v.push_back(4);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout << vec[0].first << " " << vec[1].second << endl; // 1 4

    vector<int> v1(5,100); // 5 instance of 100 value declared
    vector<int>v2(5); // 5 instance of garbage value is declared
    v2.push_back(12);
    cout << v2[0] << endl; // 12
    cout << v2[5] << endl; // 12
    vector<int>v3(5,20);
    vector<int>v4(v3);
    cout << v4.at(4) << endl; // 20
    cout << v4.back() << endl; // Returns a read/write reference to the data at the last element of the %vector.
    v4.push_back(12);
    cout << v4.back() << endl; // 12

    vector<int>::iterator it = v.begin();
    cout << *it << endl; // 1
    it++;
    cout << *it << endl; // 2

    it += 2;
    cout << *it << endl; // 4

    vector<int>::iterator iter = v.end(); // Returns a read/write iterator that points one past the last element in the %vector
    cout << *iter << endl; // -1850010399
    iter--;
    cout << *iter << endl; // 4


    vector<int>:: reverse_iterator it1 = v.rend(); // Returns a read/write reverse iterator that points to one before the first element in the %vector
    cout << *it1 << endl; // 134259864
    it1--;;
    cout << *it1 << endl; // 1
    it1--;;
    cout << *it1 << endl; // 2

    vector<int>::reverse_iterator it2 = v.rbegin(); // Returns a read/write reverse iterator that points to the last element in the %vector
    cout << *it2 << endl; // 4
    it2++;
    cout << *it2 << endl; // 3

    for(it = v.begin();it!=v.end();it++){
        cout << *it << " "; // 1 2 3 4
    }
    cout << endl;
    // auto assignation
    for(auto itrr = v.begin();itrr!=v.end();itrr++){
        cout << *itrr << " "; // 1 2 3 4
    }
    cout << endl << v.size() << endl; // 4
    // forEach loop
    for(auto it : v){
        cout << it << " "; // 1 2 3 4
    }
    cout << endl;
    v.erase(v.begin()+1); // remove second element of the vector
    for(auto it : v){
        cout << it << " "; // 1 3 4
    }
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    cout << endl;
    for(auto it : v){
        cout << it << " "; // 1 3 4 12 13 14
    }
    cout << endl;
    v.erase(v.begin()+1,v.begin()+4); 
    for(auto it : v){
        cout << it << " "; // 1 13 14
    }
    cout << endl;
    // insert function
    vector<int>values(2,100); // {100,100}
    values.insert(values.begin(),300); //  {300,100,100}
    values.insert(values.begin()+1,2,10); // {300,10,10,100,100}

    vector<int>copy(3,45);
    values.insert(values.begin()+2,copy.begin(),copy.end()); // 300 10 45 45 45 10 100 100

    cout << values.size() << endl; // 8

    values.pop_back(); // 300 10 45 45 45 10 100

    v1 = {12,13};
    v2 = {13,14};

    v1.swap(v2);
    // v2 = {12,13};
    // v1 = {13,14}; 

    v1.clear(); // erase the entire array
    cout << v1.empty(); // 1

    return 0;
}