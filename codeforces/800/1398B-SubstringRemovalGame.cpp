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
        string a;
        cin>>a;
        int temp = 0, p[100], j = 0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1')temp++;
            else {
                p[j++]=temp;
                temp=0;
            }
        }
        p[j++]=temp;
        sort(p,p+j);
        int sum=0;
        for(int i=j-1;i>=0;i-=2)sum+=p[i];
        cout<<sum<<endl;
    }
    return 0;
}