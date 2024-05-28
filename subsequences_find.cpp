#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void subSequenceFind(ll index, vector<ll> &v, ll a[], ll n)
{
    if(index==n){
        for(auto it: v){
            cout<<it<<" ";
        }
        if(v.size() == 0){
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return;
    }
    // take index
    v.push_back(a[index]);
    subSequenceFind(index+1, v, a, n);
    //don't take index
    v.pop_back();
    subSequenceFind(index+1, v, a, n);
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    subSequenceFind(0, v, a, n);
}

int main()
{
    solve();
    return 0;
}