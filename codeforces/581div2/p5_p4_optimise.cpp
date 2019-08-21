/**
 * @Author: shadabKhan
 * @Date:   Wednesday, August 21st 2019, 4:59:31 pm
 * @Last modified by:   shadabKhan
 * @Last modified time: Wednesday, August 21st 2019, 5:24:47 pm
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  stack<int> mystack;
  string ans="";
  for(int i=0;i<str.length();i++)
  {
    ans+='0';
  }
  for(int i=0;i<str.length()-1;i++)
  {
    if(str[i]=='1')
    {
      mystack.push(i);
    }
    if(str[i]=='1'&&str[i+1]=='0')
    {
      int j=i+1;
      for(;j<str.length();j++)
      {
        if(str[j]!='0')break;
      }
      while(!mystack.empty()&&j>i+1)
      {
        ans[mystack.top()]='1';
        mystack.pop();
        j--;
      }
    }
  }
  cout<<ans<<endl;
}
