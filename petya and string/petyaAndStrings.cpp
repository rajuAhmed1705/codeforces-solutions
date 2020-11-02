#include <iostream>
#include<string.h>

using namespace std;

int main(){
    string s1,s2;
    int x=0;

    cin>>s1;
    cin>>s2;

    for(int i =0;i<s1.size();i++){
        if(tolower(s1[i]) < tolower(s2[i])){
            x--;
            break;
        }else if(tolower(s1[i]) > tolower(s2[i])){
            x++;
            break;
        }
    }

    cout<<x;

    return 0;

}
