#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    long s[4];
    int c = 3;

    cin >> s[0] >> s[1] >> s[2] >> s[3];

    sort(s, s + 4);

    for (size_t i = 0; i < 3; i++)
    {
        if (s[i] != s[i + 1])
        {
            c--;
        }
    }

    cout << c;

    return 0;
}