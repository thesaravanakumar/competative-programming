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
        string s;
        cin>>s;
        int o1=0,o2=0,ans=0;
        for(char a:s){
            if(a=='(')o1++;
            if(a=='[')o2++;
            if(a==')'&&o1){ans++;o1--;}
            if(a==']'&&o2){ans++;o2--;}
        }
        cout<<ans<<endl;
    }
    return 0;
}