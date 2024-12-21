// Find the longest subarray with a given sum k.

#include <iostream>
#include <vector>
using namespace std;

void SubArray(vector<int> &v, int k)
{
    int n = v.size(), CurrentSum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {

        if (CurrentSum == k)
        {
        }
    }
}

int main()
{
    vector<int> v = {3, 3, 4, 2, 3, 3};
    int k;
    cout << "enter the number as given sum :";
    cin >> k;
    SubArray(v, k);

    return 0;
}