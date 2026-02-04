#include <iostream>
using namespace std;
int main()
{
    char arr[20];
    cin >> arr;
    cout << arr;
    cout << arr+2;
    for(int i=0;i<100;i++){
        cout << arr[i] << " ";
    }
    return 0;
}