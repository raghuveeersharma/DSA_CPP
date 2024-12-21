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
            if (v[j - 1] > v[j])
            {
                swap(v[j - 1], v[j]);
            }
        }
    }
}

void frequency(vector<int> &v)
{
    int n = v.size(), count = 0, element = v[0];
    for (int i = 0; i <= n; i++)
    {
        if (element == v[i])
        {
            count++;
        }
        else
        {
            cout << element << ":" << count << " ";
            element = v[i];
            count = 1;
        }
    }
}
int main()
{
    vector<int> v = {4, 1, 4, 2, 1, 5, 6, 4};
    int n = v.size();
    Sort(v);
    frequency(v);
    cout << endl;

    return 0;
}