#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    bool flag = true;

    cin >> s;
    cin >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[t.size() - i - 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}