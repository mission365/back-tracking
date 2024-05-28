#include<bits/stdc++.h>
using namespace std;
     
#define ll long long
#define endl '\n' 

ll fibonnacci(ll n){
    if(n<=1){
        return n;
    }
    ll last = fibonnacci(n-1);
    ll slast = fibonnacci(n-2);
    return last + slast;
}
     
void solve(){
    int n;
    cin>>n;
    cout<<fibonnacci(n);
}
     
int main() {
    solve();
    return 0;
}