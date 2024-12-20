#include <iostream>
#include <vector>
using namespace std;

void MoveZero(vector<int> &v)
{
    int n = v.size();
    int l = 0, r = 1;
    while (r < n)
    {
        if (v[l] == 0 && v[r] != 0)
        {
            swap(v[l], v[r]);
            l++;
            r++;
        }
        else if (v[r] == 0)
        {
            r++;
        }
        else if (v[l] != 0)
        {
            l++;
        }
    }
}
int main()
{
    vector<int> v = {1, 0, 0, 2, 0, 3, 4, 0, 5, 6};
    int n = v.size();
    MoveZero(v);
    for (int num : v)
    {
        cout << num << " ";
    }

    return 0;
}