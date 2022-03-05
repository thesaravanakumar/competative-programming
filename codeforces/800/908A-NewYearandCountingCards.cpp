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
int c = 0;
string s, a = "aeiou13579";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++){
        c+=(a.find(s[i])<10);
    }
    cout<<c;
    return 0;
}