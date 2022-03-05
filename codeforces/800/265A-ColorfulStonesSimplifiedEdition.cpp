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
    int pos=1;
    string s,t;
    cin>>s>>t;
    int j=0;
    for(int i=0;i<t.size();i++){
            if(s[j]==t[i]){pos++;j++;}
    }
    cout<<pos;
    return 0;
}