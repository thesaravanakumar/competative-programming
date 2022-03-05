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
        int a[n+1],sum=0;
        bool even=false;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==0&&!even){
                even=true;
                cout<<"1\n"<<i<<endl;
            }
        }
        if(!even){
            if(n==1)cout<<-1<<endl;
            else cout<<"2\n1 2\n";
        }
    }
    return 0;
}