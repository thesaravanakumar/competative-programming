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
    set<string> a;
    int flag=0;
    w(t){
        string s;
        cin>>s;
        if(find(a.begin(),a.end(),s)==a.end()){
            a.insert(s);
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}