/**
 * @Author: shadabKhan
 * @Date:   Monday, September 23rd 2019, 7:30:10 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Monday, September 23rd 2019, 8:09:51 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  string str;
  cin>>str;
  if(str.length()>1)
  {
    if(k>=1)
    {
      if(str[0]!='1')
      {
        str[0]='1';
        k--;
      }
    }
    for(int i=1;i<n&&k!=0;i++)
    {
      if(str[i]!='0')
      {
        str[i]='0';
        k--;
      }
    }
  }
  else
  {
    if(k>=1)str[0]='0';
  }
  cout<<str<<endl;
}
