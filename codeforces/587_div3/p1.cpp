/**
 * @Author: shadabKhan
 * @Date:   Saturday, September 21st 2019, 12:51:06 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Saturday, September 21st 2019, 1:03:03 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int ans=0,as=0,bs=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='a')as++;
    else
    bs++;
    if(i%2==1)
    {
      if(as!=bs)
      {
        ans++;
        if(as>bs)
        {
          s[i]='b';as--;
          bs++;
        }
        else
        {
          s[i]='a';bs--;
          as++;
        }
      }
    }
  }
  cout<<ans<<endl;
  cout<<s<<endl;
}
