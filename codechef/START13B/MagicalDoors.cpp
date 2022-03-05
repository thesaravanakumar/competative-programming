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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
       string s;
       cin>>s;
       char temp='1';
       ll c=0;
       for(ll i=0;i<s.size();i++){
           if(s[i]!=temp){
               c++;
               temp=s[i];
           }
       }
       cout<<c<<endl;
    }
    return 0;
}
// 0
// 3
// 2

