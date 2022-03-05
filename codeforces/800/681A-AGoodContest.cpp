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
    bool temp = false;
    w(t){
        string s;int before,after;
        cin>>s>>before>>after;
        if(before>=2400&&after>before){
            temp=true;
        }
    }
    puts(temp?"YES":"NO");
    return 0;
}