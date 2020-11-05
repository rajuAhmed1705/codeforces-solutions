#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int s[n];
    int count[3] = {0, 0, 0}, t = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] == 1)
            count[0]++;
        if (s[i] == 2)
            count[1]++;
        if (s[i] == 3)
            count[2]++;
        if (s[i] == 4)
        {
            t++;
        }
    }
    while (count[2] != 0 && count[0] != 0)
    {
        t++;
        count[0]--;
        count[2]--;
    }
    if (count[2] != 0 && count[0] == 0)
    {
        t = t + count[2];
        count[2] = 0;
    }
    t = t + count[1] / 2;
    if (count[1] % 2 != 0)
    {
        if (count[1] <= 2)
        {
            t++;
            count[1] = 0;
            count[0] = 0;
        }
        else
        {
            count[0] = count[0] - 2;
            count[1] = 0;
            t++;
        }
    }
    if (count[0] != 0)
    {
        t = t + count[0] / 4;
        if (count[0] % 4 != 0)
        {
            t++;
        }
    }

    cout << t << endl;

    return 0;
}