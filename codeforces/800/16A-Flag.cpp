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
bool striped(string s){
    int c=s[0];
    for(int i=1;i<s.size();i++){
        if(c!=s[i])return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    string s;
    char c;
    int temp=0;
    cin>>s;
    c=s[0];
    if(striped(s))temp=1;
    for(int i=1;i<n;i++){
        cin>>s;
        if(striped(s)||c==s[0])temp=1;
        c=s[i];
    }
    if(temp)cout<<"NO";
    else cout<<"YES";
    return 0;
}