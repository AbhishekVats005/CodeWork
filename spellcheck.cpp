#include<bits/stdc++.h>
#include<string>
using namespace std;

void atom(){
    string lc;
    cin>>lc;

    if(lc == 'Timur' || lc == 'miurT' || lc == 'Trumi' || lc == 'mriTu'){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}
int main(){
    int sac=1;
    cin>>sac;
    for(int i=0;i<=sac;i++){
        atom();
    }
    return 0;
}
