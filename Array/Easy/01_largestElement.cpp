#include <iostream>
using namespace std;

// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// https://takeuforward.org/data-structure/find-the-largest-element-in-an-array
// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A

int findLargest(int n, int arr[]){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Maximum Element of the array is : " << findLargest(n,arr);
    return 0;
}