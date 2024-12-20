#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    for (int i = 0; i < 2; i++)
    {
        int val = v[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            v[j] = v[j - 1];
        }
        v[0] = val;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}