#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    float sum = 0;

    cin >> n;

    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += c[i];
    }

    cout << sum / n;

    return 0;
}
