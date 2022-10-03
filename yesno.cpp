#include<iostream>
#include<string>
using namespace std;

int main(){
    int sac;
    cin>>sac;
    while(sac--){
        string l;
        cin>>l;
        int n = 0;
        if(l[0] == 'y' || l[0] == 'Y'){
            n++;
        }
        if(l[1] == 'e' || l[1] == 'E'){
            n++;
        }
        if(l[2] == 's' || l[2] == 'S'){
            n++;
        }
        if(n == 3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }     
    }
    return 0;
}