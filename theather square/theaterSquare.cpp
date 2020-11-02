#include<iostream>

using namespace std;

int main(){

    long long int n,m,a,x;

    cin>>n>>m>>a;

    if(n%a == 0){
        x = n/a;
    }else x =  n/a + 1;

    if(m%a == 0){
       x *=  m/a;
    }else x *=  m/a+1;

    cout<<x<<endl;

    return 0;

}
