#include <iostream>
#include <algorithm>
using namespace std;

void printName(int i, int n, string name){
    if(i>n) return;
    cout << name << endl;
    printName(i+1,n,name);
    // O(n)
}

void print1toN(int i,int n){
    if(i>n) return;
    cout << i << " ";
    print1toN(i+1,n);
}

void printNto1(int i,int n){
    if(i<1) return;
    cout << i << " ";
    printNto1(i-1,n);
}

void print1tonbybacktrak(int i, int n){
    if(i<1) return;
    print1tonbybacktrak(i-1,n);
    cout << i << " ";
}

void printNto1ByBackTrack(int i , int n){
    if(i>n) return;
    printNto1ByBackTrack(i+1,n);
    cout << i << " ";
}

// Parameterised
void sumOfN(int n, int sum){
    if(n<1){
        cout << sum ;
        return;
    }
    sumOfN(n-1,sum + n);
}

// Functional
int sumOfN(int n){
    if(n==0) return 0;
    return n + sumOfN(n-1);
}

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

// void reverseArray(int i,int arr[], int n){
//     if(i>=n) return;
//     swap(arr[i],arr[n-1]);
//     reverseArray(i+1,arr,n-1);
// }

void reverseArray(int i, int arr[], int n){
   if(i>=(n/2)) return;
   swap(arr[i], arr[n-i-1]);
   reverseArray(i+1, arr,n);
}

bool checkPallindrome(int i,string str,int length){
    if(i>=(length/2)) return true;
    if(str[i]!=str[length-i-1]) return false;
    return checkPallindrome(i+1,str,length);
}

int fibonacciSeries(int n){
    if(n<=1) return n;
    int last = fibonacciSeries(n-1);
    int secondLast = fibonacciSeries(n-2);
    return last + secondLast;
}

int main()
{
    int n;
    cin >> n;

    // cin.ignore();
    // string name;
    // getline(cin,name);
    // printName(1,n,name);

    // print1toN(1,n);
    // printNto1(n,n);
    // print1tonbybacktrak(n,n);
    // printNto1ByBackTrack(1,n);
    // sumOfN(n,0);
    // cout << sumOfN(n);
    // cout << fact(n);

    // int arr[n];
    // for(int i=0;i<n;i++) cin >> arr[i];
    // reverseArray(0,arr,n);
    // for(int i=0;i<n;i++) cout << arr[i] << " ";

    // string str;
    // cin >> str;
    // cout << checkPallindrome(0,str,str.length());

    cout << fibonacciSeries(n); // O(2^n)
    return 0;
}