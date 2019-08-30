/**
 * @Author: shadabKhan
 * @Date:   Sunday, August 25th 2019, 8:14:54 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Sunday, August 25th 2019, 8:26:23 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,n;
    cin>>a>>b>>n;
    int c=a^b;
    if(n%3==0)cout<<a<<endl;
    else if(n%3==1)cout<<b<<endl;
    else
    cout<<c<<endl;
  }
}
