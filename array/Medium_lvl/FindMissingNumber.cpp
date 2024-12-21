#include <iostream>
#include <vector>
using namespace std;

int SumNth(int n) // this funtion return the total sum till Nth number
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int SumArray(vector<int> &v) // funtion return the sum of all elemnt of array
{
    int n = v.size(), sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
    }
    return sum;
}

int main()
{
    vector<int> v = {1, 2, 4, 5};
    int n;
    cout << "enter the nth number :";
    cin >> n;
    int A_sum = SumArray(v);
    int T_sum = SumNth(n);
    cout << T_sum - A_sum; // ans substract the array sum from total sum
    return 0;
}