#include <bits/stdc++.h>
using namespace std;


// https://www.geeksforgeeks.org/problems/second-largest3735/1
// https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array
// https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

vector<int> getSecondOrderElement(int n, int arr[])
{
    // first approach is first sorted a array and then find second largest for the array
    // time complexity would be O(nlogn+n)

    // second approach is first we find max and then find second Largest
    // Time complexity would be O(2n)

    int largest = INT_MIN;
    int smallest = INT_MAX;
    int secondLargest = INT_MIN;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        largest = max(arr[i], largest);
        smallest = min(arr[i], smallest);
    }
    for (int i = 0; i < n; i++)
    {
        if (secondLargest < arr[i] && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
        if(secondSmallest>arr[i]&& arr[i]!=smallest){
            secondSmallest = arr[i];
        }
    }
    return {largest,secondLargest,smallest,secondSmallest};

}

// third approach
int secondLargest(int n,int arr[]){
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;
    int max = INT_MIN; int secondMax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        } else if (arr[i]>secondMax&&arr[i]<max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int secondSmallest(int n,int arr[]){
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;
    int min = INT_MAX;
    int secondMin = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            secondMin = min;
            min = arr[i];
        } else if (arr[i]<secondMin && arr[i]<min){
            secondMin = arr[i];
        }
    }
    return secondMin;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> answer =  getSecondOrderElement(n, arr);
    cout << "Maximum element is : " << answer[0] << endl;
    cout << "Second Maximum element is : " << answer[1] << endl;
    cout << "Minimum element is : " << answer[2] << endl;
    cout << "Second Minimum element is : " << answer[3] << endl;

    cout << secondLargest(n,arr) << endl;
    cout << secondSmallest(n,arr);

    return 0;
}