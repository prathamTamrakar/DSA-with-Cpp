#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = 2 * n - 2 - j;
            int bottom = 2 * n - 2 - i;

            int minDist = min(min(top, bottom), min(left, right));
            cout << n - minDist << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}