#include <iostream>
using namespace std;

void Count(string s)
{
    int n = s.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    cout << "vowels :" << count << " " << "consonants : " << n - count;
}
int main()
{
    string s;
    cout << "enter a String :";
    cin >> s;
    Count(s);
    return 0;
}