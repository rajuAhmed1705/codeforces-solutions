#include <iostream>
using namespace std;

int main()
{
    long x;
    int m[] = {5, 4, 3, 2, 1}, s = 0;

    cin >> x;
    for (int i = 0; i < 5; i++)
    {
        if (x % m[i] == 0)
        {
            s = s + x / m[i];
            x = x - (x / m[i]) * m[i];
        }
    }

    cout << s << endl;

    return 0;
}