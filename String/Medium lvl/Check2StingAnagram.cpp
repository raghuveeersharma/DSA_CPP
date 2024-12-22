#include <iostream>
using namespace std;

string Sort(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    return s;
}
int main()
{
    string s1, s2;
    cout << "enter the 1st string :";
    cin >> s1;
    cout << "enter the 2nd string :";
    cin >> s2;
    bool ans = Sort(s1) == Sort(s2) ? true : false;
    cout << ans;
    return 0;
}