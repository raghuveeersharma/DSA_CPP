#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MaxSum(vector<int> &v)
{
    int n = v.size(), sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (maxSum < sum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << MaxSum(v);
    return 0;
}