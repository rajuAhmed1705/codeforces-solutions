#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, odd = 0, even = 0;

    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (odd > even)
    {
        for (size_t i = 0; i < n; i++)
        {
            if (s[i] % 2 == 0)
            {
                cout << i + 1;
            }
        }
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            if (s[i] % 2 != 0)
            {
                cout << i + 1;
            }
        }
    }

    return 0;
}