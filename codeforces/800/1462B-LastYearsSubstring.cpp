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
        int n,j=0;
        cin>>n;
        string s;
        cin>>s;
        cout<<(regex_match(s,regex(".*2020|2.*020|20.*20|202.*0|2020.*"))?"YES\n":"NO\n");
    }
    return 0;
}