#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 9, 6, 4, 5};
    int n = v.size();
    int largest = 0, nth;
    cout << "enter the nth number :";
    cin >> nth;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]); // bubble sort
            }
        }
    }
    cout << v[nth - 1];
    return 0;
}