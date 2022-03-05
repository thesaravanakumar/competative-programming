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
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=n;i>=1;i--)cout<<i<<" ";
        }
        else{
            cout<<(n/2)+1<<" ";
            for(int i=n-1;i>=1;i--){
                if(i==(n/2)+1)cout<<n<<" ";
                else cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}