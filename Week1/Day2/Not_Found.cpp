#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int freq[26]={0};
   for(int i=0;i<s.size();i++)
   {
       int val=s[i]-'a';
       freq[val]++;
   }
   char ch='\0';
   for(int i=0;i<26;i++)
   {
       if(freq[i]==0)
       {
          ch=i+'a'; 
          break;
       }
   }
   if(ch=='\0') cout<<"None\n";
   else cout<<ch<<endl;
}