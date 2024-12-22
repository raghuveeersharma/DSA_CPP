#include <iostream>
using namespace std;

char Palindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i] == s[j] && i != j)
            {
                break;
            }
            else
            {
                count++;
                if (count == n)
                {
                    return s[i];
                }
            }
        }
    }
}
int main()
{
    string s;
    cout << "enter a String :";
    cin >> s;
    cout << Palindrome(s);
    return 0;
}