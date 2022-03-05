#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=1&&a<=1000){
        while(a--){
            int b;
            cin>>b;
            if(b>=2&&b<=50){
            int c[b],d[b-1];
            for(int i=0;i<b;i++)cin>>c[i];
            sort(c,c+b);
            for(int i=0;i<=b-2;i++){
                d[i]=abs(c[i]-c[i+1]);
            }
            int* i1; 
            i1 = std::min_element(d, d + (b-1));
            cout<<*i1<<endl;
        }
        }
    }
    return 0;
}