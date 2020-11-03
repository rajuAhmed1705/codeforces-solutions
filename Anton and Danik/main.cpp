#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    string s;

    cin >> n;
    cin >> s;

    long a = 0, d = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
            d++;
    }

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    if (a < d)
    {
        cout << "Danik" << endl;
    }
    if (a == d)
    {
        cout << "Friendship" << endl;
    }

    return 0;
}