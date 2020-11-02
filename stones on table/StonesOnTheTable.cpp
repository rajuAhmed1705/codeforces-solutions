/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,m=0;
    string s;
    
    cin>>n;
    cin>>s;
    
    for(int i = 1; i<n;i++){
        s[i-1] == s[i] ? m++ : m;
    }
    
    std::cout << m << std::endl;

    return 0;
}
