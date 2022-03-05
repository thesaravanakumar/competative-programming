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
        sort(s.begin(),s.end());
        int ans=0;
        for(int i=1;i<s.size();i++){
            ans|=s[i]!=s[i-1]+1;
        }
        cout<<(ans?"NO":"YES")<<endl;
    }
    return 0;
}