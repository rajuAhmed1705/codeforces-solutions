#include <iostream>

using namespace std;

int main()
{
    string s, h = "hello";
    int f = 0, pass = 0;

    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == h[f])
        {
            f++;
            pass++;

            if (pass == 5)
            {
                break;
            }
        }
    }

    if (pass == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}