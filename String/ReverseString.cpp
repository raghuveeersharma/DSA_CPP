#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter a String :";
    cin >> s;
    for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
    {
        swap(s[i], s[j]);
    }
    cout << s;
}