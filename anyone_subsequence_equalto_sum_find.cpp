#include<bits/stdc++.h>
using namespace std;
     
#define ll long long
#define endl '\n' 

bool anyoneSubsequence(ll index, ll n, ll k, vector<ll> &v, ll a[], ll sum){
    if(index==n){
        if(sum==k){
            for(auto it: v){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }

    v.push_back(a[index]);
    sum+=a[index];
    if(anyoneSubsequence(index+1, n, k, v, a, sum) == true){
        return true;
    }

    v.pop_back();
    sum-=a[index];
    if(anyoneSubsequence(index+1, n, k, v, a, sum) == true){
        return true;
    }

    return false;
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
    cout<<"Subsequence is:"<<endl;
    anyoneSubsequence(0, n, k, v, a, 0);
}
     
int main() {
    solve();
    return 0;
}