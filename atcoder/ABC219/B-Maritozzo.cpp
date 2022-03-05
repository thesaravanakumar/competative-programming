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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    for(int i=0;i<s4.size();i++){
        if(s4[i]=='1')cout<<s1;
        else if(s4[i]=='2')cout<<s2;
        else if(s4[i]=='3')cout<<s3;
    }
    return 0;
}