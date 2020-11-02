
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int m[5][5],n;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>m[i][j];
            if(m[i][j] == 1){
                n = abs(i-2)+abs(j-2);
            }
        }
    }

    cout<<n;

    return 0;

}
