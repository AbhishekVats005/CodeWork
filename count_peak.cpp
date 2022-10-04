#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

void solve()
{
    int n;
    cin>>n;
    ll val=0;
    
    if(n>=3){
    	val=pow(3,(n-3))*8*(n-2);
    	val=val+val/4;
    	cout<<val<<endl;
    }
    else
    	cout<<0<<endl;
}

int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin >> t;
  while (t--)
  {
    solve();
  }
}