// Find the majority element (appears more than n/2 times ).

#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (v[j] < v[j - 1])
            {
                swap(v[j], v[j - 1]);
            }
        }
    }
}
int MaxOccur(vector<int> &v)
{
    int n = v.size();
    return v[n / 2];
}

int main()
{
    vector<int> v = {3, 3, 4, 2, 3, 3};
    Sort(v);
    cout << MaxOccur(v);
    return 0;
}