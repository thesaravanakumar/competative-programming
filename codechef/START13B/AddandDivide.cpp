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
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        ll k,l;
        cin>>k>>l;
        unordered_map<ll,ll> arr;
        arr[k]++;
        while(1){
            ll q = lcm(k,l);
            ll w = q/l;
            k=w;
            if(w==1){
                cout<<"YES"<<endl;
                break;
            }  
            if(arr[w]>0){
                cout<<"NO"<<endl;
                break;
            }
            arr[w]++;
        }
    }
    return 0;
}
// NO
// YES
// NO
// YES