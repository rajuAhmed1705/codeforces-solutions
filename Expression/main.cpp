#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    a + b *c > max ? max = a + b * c : max;
    a *(b + c) > max ? max = a * (b + c) : max;
    a *b *c > max ? max = a * b * c : max;
    (a + b) *c > max ? max = (a + b) * c : max;
    (a + b) + c > max ? max = (a + b) + c : max;

    cout << max;

    return 0;
}