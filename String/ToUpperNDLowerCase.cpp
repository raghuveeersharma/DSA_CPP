#include <iostream>
using namespace std;

string Lower(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] + 32);
        }
    }
    return s;
}

string Upper(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 32);
        }
    }
    return s;
}
int main()
{
    string s;
    cout << "enter a String :";
    cin >> s;
    cout << Upper(s) << endl;
    cout << Lower(s);
    return 0;
}