#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define mii           map<int,int>
#define sp(x,y)       fixed<<setprecision(y)<<x
using namespace std;
bool permutation(ll arr[], ll n)
{
    set<ll> hash;
    ll maxEle = 0;
    for (ll i = 0; i < n; i++) {
        hash.insert(arr[i]);
        maxEle = max(maxEle, arr[i]);
    }
 
    if (maxEle != n)
        return false;
    if (hash.size() == n)
        return true;
 
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    if (permutation(arr, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}