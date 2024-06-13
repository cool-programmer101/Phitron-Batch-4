#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0]==1) flag=2;
        else flag=1;
        for(int i=1; i<n; i++)
        {
            flag++;
            if(flag==a[i])
                flag++;
        }
        cout<<flag<<endl;
    }
}