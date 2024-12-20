#include <iostream>
#include <vector>
using namespace std;

void CheckSorted(vector<int> &v)
{
    int n = v.size(), count = 1;
    for (int i = 0; i < n - count; i++)
    {
        if (v[i] == v[i + 1])
        {
            v.erase(v.begin() + i);
            count++;
        }
    }
}
int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7};
    int n = v.size();
    CheckSorted(v);
    for (int num : v)
    {
        cout << num;
    }

    return 0;
}