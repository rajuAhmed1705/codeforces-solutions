#include<iostream>
using namespace std;

int main(){

    int n,k,c=0,a[100];

    cin>>n>>k;

    for(int i = 0;i < n; i++){
        cin>>a[i];
    }

    for(int i = 0;i < n; i++){
        a[i] > 0 && a[i] >=a[k-1] ? c++ : c;
    }

    cout<<c<<endl;

    return 0;
}
