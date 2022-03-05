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
    int n,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='R'&&s[i+1]=='U'||s[i]=='U'&&s[i+1]=='R'){sum++;i++;}
        else sum++;
    }
    cout<<sum;
    return 0;
}