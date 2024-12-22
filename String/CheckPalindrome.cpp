#include <iostream>
using namespace std;

bool Palindrome(string s)
{
    string check = s;
    int n = s.size();
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(s[i], s[j]);
    }
    return check == s ? true : false;
}
int main()
{
    string s;
    cout << "enter a String :";
    cin >> s;
    cout << Palindrome(s);
    return 0;
}