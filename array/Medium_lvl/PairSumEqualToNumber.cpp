#include <iostream>
#include <vector>
using namespace std;

void FindPairs(vector<int> &v, int num)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (v[i] + v[j] == num && i != j)
            {
                cout << v[i] << "," << v[j] << endl;
                ;
            }
        }
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size(), num;
    cout << "enter the number :";
    cin >> num;
    FindPairs(v, num);
    return 0;
}