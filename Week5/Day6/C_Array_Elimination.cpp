#include<bits/stdc++.h>
using namespace std;
int a[200005];
int bi[35];
void fun(int x){
    int i=0;
    while(x){
        bi[i]+=(x&1)==1;
        x>>=1;
        i++;
    }
}
void out(){
    for(int i=0;i<30;i++)cout<<bi[i]<<' ';
    cout<<endl;
}
void solve(){
    int n;
    memset(bi,0,sizeof(bi));
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        fun(a[i]);
    }
    int pos;
    for(int i=1;i<=n;i++){
        pos=1;
        for(int j=0;j<30;j++){
            if(bi[j]%i!=0){pos=0;break;}
        }
        if(pos)cout<<i<<' ';
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}