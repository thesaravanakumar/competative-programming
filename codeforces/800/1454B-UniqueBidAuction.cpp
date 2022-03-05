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
        int a[n],b[n];
        for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==0&&a[i]!=a[i+1]){
                ans=a[i];
                break;
            }
            else if(i==n-1&&a[i]!=a[i-1]){
                ans=a[i];
                break;
            }
            else if(a[i]!=a[i+1]&&a[i]!=a[i-1]){
                ans=a[i];
                break;
            }
        }
        if(ans==0)cout<<"-1"<<endl;
        else{
            for(int i=0;i<n;i++){
                if(ans==b[i]){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}