#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string s;
    int c = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            c++;
        }
    }

    if (s.size() - c <= c)
    {
        for (int i = 0; i < s.size(); i++)
        {
            putchar(tolower(s[i]));
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            putchar(toupper(s[i]));
        }
    }

    return 0;
}