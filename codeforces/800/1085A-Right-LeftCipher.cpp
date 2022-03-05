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
    cin >> s;
    int len=s.size();
    int n=(len-1)/2;
    cout << s[n];
    for(int i=1;i<=n;i++){
        cout << s[n+i] << s[n-i];
    }
    if(s.size()%2==0){
        cout << s[s.size()-1];
    }
    return 0;
}