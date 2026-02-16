#include <iostream>
using namespace std;

string remDup(string s, string ans, int i, bool m[])
{
    if (i == s.length())
        return ans;
    char c = s[i];
    if (m[c - 'a'] == false)
    {
        ans += c;
        m[c - 'a'] = true;
    }
    return remDup(s, ans, i + 1, m);
}

int main()
{
    string s = "aapnacollege";
    string a = "";
    bool visited[26] = {false};
    cout << remDup(s, a, 0, visited) << endl;
    ;
    return 0;
}
