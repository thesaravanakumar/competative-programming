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
    string s;
    getline(cin, s);
    for(int i=s.size()-1;i>=0;i--){
        if (s[i] >= 97 && s[i] <= 122 || s[i] >= 65 && s[i] <= 90){
            s[i]=tolower(s[i]);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {cout<<"YES";break;}
            else {cout<<"NO";break;}
        }
    }
    return 0;
}