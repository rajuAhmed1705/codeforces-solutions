#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, p, kill = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> p;

    for (int i = 1; i <= p; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            kill++;
        }
    }
    cout << kill;

    return 0;
}
