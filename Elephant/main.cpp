#include <iostream>
using namespace std;

int main()
{
    long x;
    int s = 0;
    cin >> x;
    if (x <= 5)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        s = x / 5;
    }

    if (x % 5 == 0)
    {
        cout << s << endl;
    }
    else
        cout << s + 1 << endl;

    return 0;
}