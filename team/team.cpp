#include <iostream>
using namespace std;

int main(){
    bool p,v,t;

    int c = 0,n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>p>>v>>t;
        p+v+t >= 2 ? c++ : c;
    }

    cout<<c;

    return 0;

}
