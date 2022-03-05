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
    string s;
    cin>>s;
    int temp=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')temp=1;
    }
    if(temp)cout<<"YES";
    else cout<<"NO";
    return 0;
}