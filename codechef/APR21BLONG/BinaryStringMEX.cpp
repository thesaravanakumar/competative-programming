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
constexpr int MAXN=(int)1e6;
int dp[MAXN+2],dp1[MAXN+2];
int n0[MAXN],n1[MAXN];
void spi(){
        string s;
        cin>>s;
        int n=s.length();
        int lp=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                for(int j=lp+1;j<=i;j++)
                    n0[j]=i;
                lp=i;
            }
        }
        for(int i=lp+1;i<n;i++)n0[i]=n;
        if(n0[0]==n){
            cout<<0<<endl;
            return;
        }
            lp=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    for(int j=lp+1;j<=i;j++)n1[j]=i;
                    lp=i;
                }
            }
            for(int i=lp+1;i<n;i++)n1[i]=n;
            dp[n]=dp[n+1]=0;
            dp1[n]=dp1[n+1]=0;
            for(int i=n-1;i>=0;i--){
                dp[i]=dp[i+1];
                if(s[i]=='0'&&n1[i]<n)
                dp[i]=max(dp[i],dp[n1[i]+1]+1);
                if(s[i]=='1'&&n0[i]<n)
                dp[i]=max(dp[i],dp[n0[i]+1]+1);
                dp1[i]=dp1[i+1];
                if(n1[i]<n)
                dp1[i]=max(dp1[i],dp[n1[i]+1]+1);
            }
            int len=dp1[0]+1,cur=n1[0]+1;
            string ans="1";
            for(int i=1;i<len;i++){
                if(cur>=n){
                    ans.pb('0');
                    continue;
                }
                if(n0[cur]>=n){
                    ans.pb('0');
                    cur=n0[cur]+1;
                    continue;
                }
                if(dp[n0[cur]+1]<len-i-1){
                    ans.pb('0');
                    cur=n0[cur]+1;
                }
                else{
                    ans.pb('1');
                    cur=n1[cur]+1;
                }
            }
            cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    w(t){
        spi();
    }
    return 0;
}