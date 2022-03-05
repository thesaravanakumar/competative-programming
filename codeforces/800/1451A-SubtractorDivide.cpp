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
        int n,c=0;
        cin>>n;
        while(n>1){
            if(n==2){c++;break;}
            else if(n==3){c+=2;break;}
            else if(n%2==0){n=2;c++;}
            else{
                if(n%((n/2)-1)!=0){n-=1;c++;}
                else {n=3;c++;}
            } 
        }
        cout<<c<<endl;
    }
    return 0;
}