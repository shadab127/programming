/**
 * @Author: shadabKhan
 * @Date:   Sunday, September 22nd 2019, 9:22:21 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 23rd 2019, 3:36:32 pm
 */



#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int64_t a,b,c;
   cin>>a>>b>>c;
   if(a==0 && c%2==0 && (c!=0 || b%2==0) && b!=1)cout<<"YES"<<endl;
   else if(a==1 && c%2==1 && b!=0)cout<<"YES"<<endl;
   else if(a!=0 && a!=1&&(a+c)%2==0)cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
 }
}
