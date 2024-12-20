#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 9, 6, 4, 5};
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < v[i])
        {
            ans = v[i];
        }
    }
    cout << ans;
}