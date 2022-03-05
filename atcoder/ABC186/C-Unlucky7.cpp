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
int decToOctal(int deciNum)
{
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
    while (deciNum != 0) {
        int remainder = deciNum % 8;
        octalNum += remainder * countval;
        countval = countval * 10;
        deciNum /= 8;
    }
    return octalNum;
}
bool query(int a){
    while(a){
        if(a%10==7)return false;
        a/=10;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(query(i)&&query(decToOctal(i))){
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}