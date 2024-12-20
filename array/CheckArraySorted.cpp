#include <iostream>
#include <vector>
using namespace std;

bool CheckSorted(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    cout << CheckSorted(v);

    return 0;
}