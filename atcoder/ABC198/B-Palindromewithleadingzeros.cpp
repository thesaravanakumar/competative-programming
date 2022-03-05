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
    string s=to_string(n);
    int l=s.size();
    int j=l-1;
    while(s[j]=='0'&&j>=0)j--;
    int i=0;
    while(s[i]=='0'&&i<l)i++;
    bool temp=false;
    while(i<j){
        if(s[i]!=s[j]){
            temp=true;
            break;
        }
        i++;
        j--;
    }
    cout<<(temp==true?"No":"Yes")<<endl;
    return 0;
}