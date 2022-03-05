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
        int m;
        cin>>m;
        long long int a[m];
        for (int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        long long int cntneg=0, cntpos=0, sum=0;
        if(n==1)
        {
            sort(a,a+m);
            if(a[0]>0)cout<<0<<endl;
            else if(a[m-1]<0) cout<<0<<endl;
            else
            {
                for(int i=0;i<m;i++)
                {
                    if(a[i]>0){cntneg=i;cntpos=m-i;break;}
                }
                while (cntneg>0 && cntpos>0)
                {
                    sum = sum + cntneg+cntpos -1;
                    cntneg --;
                    cntpos --;
                }
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}