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
    int i=s.find('.');
    if(s[i-1]!='9'){
        if(s[i+1]>='5')s[i-1]++;
        cout<<s.substr(0,i);
    }
    else
        cout << "GOTO Vasilisa.";
    return 0;
}