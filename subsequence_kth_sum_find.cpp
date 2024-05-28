#include<bits/stdc++.h>
using namespace std;
     
#define ll long long
#define endl '\n' 

void kthSumfind(ll index, vector<ll> v, ll a[], ll n, ll sum, ll k){
    if(index == n){
        
        if(sum==k){
            for(auto it: v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    v.push_back(a[index]);
    sum+=a[index];
    kthSumfind(index+1, v, a, n, sum, k);

    v.pop_back();
    sum-=a[index];
    kthSumfind(index+1, v, a, n, sum, k);
}

void solve(){
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> v;
    cout<<"subsequences are:"<<endl;
    kthSumfind(0, v, a, n, 0,k);
}
     
int main() {
    solve();
    return 0;
}