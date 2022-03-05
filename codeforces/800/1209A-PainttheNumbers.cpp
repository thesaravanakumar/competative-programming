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
int a[101];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++){cin>>q;a[q]=1;}
    int c=0;
    for(int i=1;i<101;i++){
        if(a[i]){
            for(int j=i*2;j<101;j+=i){
                a[j]=0;
            }
            c++;
        }
    }
    cout<<c;
    return 0;
}