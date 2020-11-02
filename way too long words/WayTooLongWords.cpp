#include <iostream>
using namespace std;

void word(string longWord){
    int s = longWord.size();
    if(s > 10){
        cout<<longWord[0]<<s-2<<longWord[s-1]<<endl;
    }else cout<<longWord<<endl;
}

int main(){
    int n;

    cin>>n;

    string longWord;

    for(int i = 0; i < n; i++){
        cin>>longWord;
        word(longWord);
    }

}


