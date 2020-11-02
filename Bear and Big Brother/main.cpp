#include <iostream>

using namespace std;

int main()
{

    int a, b, n = 1;

    cin >> a >> b;

    while (true)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            cout << n;
            break;
        }
        n++;
    }

    return 0;
}