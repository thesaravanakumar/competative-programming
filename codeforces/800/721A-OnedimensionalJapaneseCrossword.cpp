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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b=0,c[100],j=0,t=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B')b++;
        else if(b!=0){
            t++;
            c[j++]=b;
            b=0;
        }
    }if(b!=0){
        t++;
        c[j++] = b;
    }
    cout << t<<endl;
    for(int i=0;i<j;i++)cout<<c[i]<<" ";
    return 0;
}