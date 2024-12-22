#include <iostream>
using namespace std;

string RemoveSpace(string s)
{
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s = "the goons";
    cout << s << endl;
    cout << RemoveSpace(s);
    return 0;
}