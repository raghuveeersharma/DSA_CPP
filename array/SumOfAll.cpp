#include <iostream>
#include <vector>
using namespace std;

int Sum(vector<int> &v)
{
    int n = v.size(), sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }
    return sum;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    cout << Sum(v);
    return 0;
}