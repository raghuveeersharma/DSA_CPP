#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 9, 0, -1, 6, 4, 5};
    int n = v.size();
    int ans = v[0];
    for (int i = 1; i < n; i++)
    {
        if (ans > v[i])
        {
            ans = v[i];
        }
    }
    cout << ans;
}