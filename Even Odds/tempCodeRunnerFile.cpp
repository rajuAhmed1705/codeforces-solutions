#include <iostream>
using namespace std;

int main()
{
    long long n, p;

    cin >> n >> p;

    long long d, half;

    if (n % 2 == 0)
    {
        half = n / 2;
    }
    else
    {
        half = n / 2 + 1;
    }

    if (p < half)
    {

        d = p * 2 - 1;
    }
    else
    {
        d = (p - (half)) * 2;
    }

    cout << d;

    return 0;
}